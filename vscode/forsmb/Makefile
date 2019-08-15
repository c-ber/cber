//CC = arm-linux-gcc

PUBSO = smbcb

CC = gcc

CFLAGS = -g #-Wall
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