# Makefile for Operand Transformer Synthesis

.PHONY: synth clean schematic help

# Default target
synth: 
	@echo "Running Vivado Synthesis..."
	vivado -mode tcl -source synth_design.tcl

# Alternative: batch mode (no GUI, generates reports only)
batch:
	@echo "Running Synthesis in Batch Mode..."
	vivado -mode batch -source synth_design.tcl

# Just open schematic from checkpoint (if already synthesized)
schematic:
	@if [ -f synth_project/post_synth.dcp ]; then \
		echo "Opening existing checkpoint..."; \
		vivado synth_project/post_synth.dcp; \
	else \
		echo "No checkpoint found. Run 'make synth' first."; \
	fi

# Clean synthesis outputs
clean:
	rm -rf synth_project .Xil *.jou *.log *.dcp

help:
	@echo "Available targets:"
	@echo "  make synth      - Run synthesis and open schematic (GUI mode)"
	@echo "  make batch      - Run synthesis without GUI (reports only)"
	@echo "  make schematic  - Open existing synthesized design"
	@echo "  make clean      - Remove synthesis outputs"
