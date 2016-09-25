
CC = gcc

CFLAGS = -g -Wall

INCL = -I. -I../common/

LIBS = -lpthread -lrt

OBJ_DIR = objs

SOURCES := $(wildcard *.c)

OBJS := $(patsubst %.c,%.o,$(SOURCES))


all: $(OBJS)
	mkdir -p $(OBJ_DIR)
	mv $(OBJS) $(OBJ_DIR)

.c.o:
	$(CC) $(CFLAGS) -c $< $(INCL)


clean:
	rm -f *.o $(PUBSO) *.bak
	rm -rf $(OBJ_DIR)/