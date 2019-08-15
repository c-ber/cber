test:test.o
	gcc -o test test.o -L ./ libappengine.a -lpcap -lpthread -lz
test.o:test.c sapl_dpi_sdk.h
	gcc -o test.o -c test.c
clean:
	rm *.o
