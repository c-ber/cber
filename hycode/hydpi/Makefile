PROGRAMS=dpi

DPI_ROOT =$(shell pwd)

CC_PATH=/opt/tools-SDK_3_1_1_build_41/bin/

CC = gcc

export CC

PRO_DIR = daemon    \
          libipc    \
          npcp      \
          stat      \
          flow      \
          if        \
          encap     \
          sap       \


all:$(PROGRAMS)
	@echo "         ^_^       Compile successful!!!! "
	find $(DPI_ROOT) -regex '.*\.c\|.*\.h'|xargs tar cvf $(DPI_ROOT)/bin/src.tgz;
	tar cvf $(DPI_ROOT)/bin/bin.tgz bin/npcp bin/flow bin/dpi bin/watch
	cp $(DPI_ROOT)/debug.sh bin/
	@echo "         ^_^       Package successful!!!! "
dpi: 
	@-mkdir -p bin
	@-mkdir -p libs

	for dir in $(PRO_DIR);\
	do\
		make -C $$dir;\
	done


	@echo "[Susccess] Dpi Compile Completed!"

clean:
	for dir in $(PRO_DIR);\
	do\
		make -C $$dir clean;\
	done


	@rm -f libs/*.so
	@rm -f bin/*
	@echo "[Success] Dpi Clean Completed!"