//CC = arm-linux-gcc

PUBSO = alg

CC = gcc

CFLAGS = -g -Wall

INCL = -I. -I../common/ -I../if

LIBS = -lpthread -lrt

OBJ_DIR = objs

SOURCES := $(wildcard *.c)

OBJS := $(patsubst %.c,%.o,$(SOURCES))


all: $(OBJS)
	mv $(OBJS) $(OBJ_DIR)

.c.o:
	$(CC) $(CFLAGS) -c $< $(INCL)
	mkdir -p   $(OBJ_DIR)
	
clean:
	rm -f *.o $(PUBSO) *.bak
	rm -rf $(OBJ_DIR)/