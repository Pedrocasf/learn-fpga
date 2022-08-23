PROJECTNAME=led_matrix
VERILOGS=$(PROJECTNAME).v ../Libs/MAX7219.v ../Libs/font_rom.v ../Libs/scroller.v
all:
	yosys -q -p "synth_ice40 -top $(PROJECTNAME) -json $(PROJECTNAME).json" $(VERILOGS) || exit
	nextpnr-ice40 --force --json $(PROJECTNAME).json --pcf $(PROJECTNAME).pcf --asc $(PROJECTNAME).asc --freq 12 --lp1k --package cm36 --gui --pcf-allow-unconstrained $1 || exit
	icetime -p $(PROJECTNAME).pcf -P cm36 -r $(PROJECTNAME).timings -d lp1k -t $(PROJECTNAME).asc
	icepack $(PROJECTNAME).asc $(PROJECTNAME).bin || exit
	sudo icesprog $(PROJECTNAME).bin || exit
	echo DONE.




