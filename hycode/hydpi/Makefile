CC_PATH=/opt/tools-SDK_3_1_1_build_41/bin/

#CC = ${C_PATH}mips64-octeon-linux-gnu-gcc
CC=gcc

CPUS = $(shell grep -c processor /proc/cpuinfo)


all: 
	@-mkdir -p bin
	@-mkdir -p libs
	(cd sap;      $(MAKE) -j${CPUS})
	(cd daemon;   $(MAKE) -j${CPUS})

	@echo "[Susccess] Dpi Compile Completed!"
	
clean:
	(cd sap;      make clean )
	(cd daemon;   make clean )

	
	@rm -f libs/*.so
	@rm -f bin/*
	@echo "[Success] Dpi Clean Completed!"