PROJECTNAME=led_terminal
VERILOGS=$(PROJECTNAME).v ../Libs/uart.v ../Libs/font_rom.v ../Libs/MAX7219.v ../Libs/scroller.v
all:
	yosys -q -p "synth_ice40 -top $(PROJECTNAME) -json $(PROJECTNAME).json" $(VERILOGS) || exit
	nextpnr-ice40 --force --json $(PROJECTNAME).json --pcf $(PROJECTNAME).pcf --asc $(PROJECTNAME).asc --freq 12 --up5k --package sg48 --gui $1 || exit
	icetime -p $(PROJECTNAME).pcf -P sg48 -r $(PROJECTNAME).timings -d up5k -t $(PROJECTNAME).asc
	icepack $(PROJECTNAME).asc $(PROJECTNAME).bin || exit
	sudo icesprog $(PROJECTNAME).bin || exit
	echo DONE.




