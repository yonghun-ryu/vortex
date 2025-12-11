# Vivado Synthesis Script for Operand Transformer
# Purpose: Synthesize and generate schematic for design visualization

# Note: Using generic part for elaboration (actual part not critical for schematic viewing)
# If you have a specific target board, change the part string below

# Create project (using generic Kintex UltraScale+ part - widely available)
create_project -force operand_tf_synth ./synth_project -part xcku5p-ffvb676-2-e

# Add source files
add_files -fileset sources_1 {
    ../rtl/operand_tf_pkg.sv
    ../rtl/scaling_unit.sv
    ../rtl/operand_tf_lane.sv
    ../rtl/operand_transformer_ctrl.sv
    ../rtl/operand_transformer.sv
}

# Set top module
set_property top operand_transformer [current_fileset]

# Update compile order
update_compile_order -fileset sources_1

# Run elaboration (to see RTL schematic before synthesis)
puts "=========================================="
puts "Running Elaboration..."
puts "=========================================="
synth_design -top operand_transformer -part xcku5p-ffvb676-2-e -mode out_of_context -rtl

# Open elaborated schematic
puts "Opening Elaborated Design Schematic..."
start_gui
show_schematic [get_nets -hier]

# Optional: Run full synthesis for post-synthesis schematic
# Uncomment below to see optimized netlist
# puts "=========================================="
# puts "Running Full Synthesis..."
# puts "=========================================="
# synth_design -top operand_transformer -part xcku5p-ffvb676-2-e -mode out_of_context
# write_checkpoint -force post_synth.dcp
# show_schematic [get_nets -hier]

puts ""
puts "=========================================="
puts "Schematic View Ready!"
puts "=========================================="
puts "Navigation Tips:"
puts "  - Use Schematic window to explore hierarchy"
puts "  - Right-click on instances to 'Expand'"
puts "  - Focus on: operand_tf_lane, scaling_unit"
puts "  - Look for: Priority Encoder (HBFP), Loop unrolling (scale application)"
puts "=========================================="
