//CC = arm-linux-gcc

PUBSO = alg

CC = gcc

CFLAGS = -g -Wall
INCL = -I. -I../common/
LIBS = -lpthread -lrt

SOURCES := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(SOURCES))


all: $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< $(INCL)
	
clean:
	rm -f *.o $(PUBSO) *.bak