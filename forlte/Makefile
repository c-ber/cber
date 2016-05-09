//CC = arm-linux-gcc

PUBSO = alg

CC = gcc

CFLAGS = -g #-Wall
CFLAGS += -D_DEBUG -D_FILE_OFFSET_BITS=64
INCL = -I. -I../
LIBS = -lpthread

SOURCES := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(SOURCES))


all: $(PUBSO)
	@echo $(PUBSO) 

$(PUBSO):$(OBJS)
	$(CC) -o $@ $(OBJS) -L../libs $(LIBS) -D_FILE_OFFSET_BITS=64
	
.c.o:
	$(CC) $(CFLAGS) -c $< $(INCL) -D_FILE_OFFSET_BITS=64
	
clean:
	rm -f *.o $(PUBSO) *.bak