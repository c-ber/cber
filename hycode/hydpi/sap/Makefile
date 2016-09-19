//CC = arm-linux-gcc

PUBSO = alg

CC = gcc

CFLAGS = -g -Wall
INCL = -I. -I../common/ -I../libipc/ -I../encap/
LIBS = -lpthread -lrt

EXT = ../libipc/shmem.o ../libipc/semaphore.o ../encap/encap.o

SOURCES := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(SOURCES))


all: $(PUBSO)
	@echo $(PUBSO) 
	

$(PUBSO):$(OBJS)
	$(CC)  -o $@ $(OBJS) $(EXT) -L../libs $(LIBS)
	
.c.o:
	$(CC) $(CFLAGS) -c $< $(INCL)

clean:
	rm -f *.o $(PUBSO) *.bak