//CC = arm-linux-gcc

PUBSO = alg

CC = gcc

CFLAGS = -g -Wall
INCL = -I. 
LIBS = -lpthread

SOURCES := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(SOURCES))

all:$(PUBSO)
	echo ""

$(PUBSO):$(OBJS)
	$(CC) -o $@ $(OBJS) -L../libs $(LIBS)
	
.c.o:
	$(CC) -g $(CFLAG) -c $< $(INCL)
	
clean:
	rm -f *.o $(PUBSO) *.bak