//CC = arm-linux-gcc

PUBSO = alg

CC = gcc

CFLAGS = -g
#CFLAGS += -Wall
INCL = -I. -I../
LIBS = -lpthread

SOURCES := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(SOURCES))


all: $(PUBSO)
	@echo $(PUBSO) 

$(PUBSO):$(OBJS)
	$(CC) -o $@ $(OBJS) -L../libs $(LIBS) 
	
.c.o:
	$(CC) $(CFLAGS) -c $< $(INCL)
	
clean:
	rm -f *.o $(PUBSO) *.bak