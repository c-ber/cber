CFLAG = -g -I../common -I../libipc

GCC = gcc

src = dpi_hash.c\
	  dpi_xmit.c\
	  dpi_intf.c\
	  dpi_ifgrp.c



all:
	for file in $(src);\
		do\
		$(GCC) -c $$file $(CFLAG);\
		done
	if [ ! -e objs ];then\
		mkdir objs;\
		fi
	mv *.o objs


clean:
	rm -rf objs

