`timescale 1ns / 1ps

package operand_tf_pkg;
    // Architecture Parameters
    parameter int ELEM_WIDTH_IN  = 8;   // Input element width (Sign + Mantissa)
    parameter int ELEM_WIDTH_OUT = 8;   // Output width (Temporal Register width)
    parameter int SCALE_WIDTH    = 8;   // Scale factor width
    
    parameter int WARP_SIZE      = 32;  // Total elements per warp
    parameter int NUM_LANES      = 16;  // Number of parallel lanes
    parameter int BLOCK_SIZE     = 16;  // Elements per block (sharing global scale)

    // Simplified Configuration (Format Agnostic)
    typedef struct packed {
        logic       scale_sharing_mode; // 0: 1:2 (Default), 1: 1:4 Sharing
        logic       reserved;
    } config_t;
    
    // Input Payload Structure
    typedef struct packed {
        config_t                                    cfg;
        // Global scales removed (handled externally)
        logic [NUM_LANES-1:0][SCALE_WIDTH-1:0]     micro_scales;  // 16 Scales
        logic [WARP_SIZE-1:0][ELEM_WIDTH_IN-1:0]   elements;      // 32 Elements
    } operand_input_t;

    // Output Payload Structure
    typedef struct packed {
        logic [WARP_SIZE-1:0][ELEM_WIDTH_OUT-1:0] flattened_elements;
    } operand_output_t;

endpackage
