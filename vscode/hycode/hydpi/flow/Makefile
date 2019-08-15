//CC = arm-linux-gcc

PUBSO = flow

CC = gcc

CFLAGS = -g -Wall

INCL = -I. -I../common/ -I../libipc/

LIBS = -lpthread -lrt

OBJ_DIR = objs

SOURCES := $(wildcard *.c)

OBJS := $(patsubst %.c,%.o,$(SOURCES))

OBJS_EXT = ../libipc/$(OBJ_DIR)/shmem.o     \
      	   ../libipc/$(OBJ_DIR)/semaphore.o \

           
all: $(PUBSO)
	@echo $(PUBSO) 
	

$(PUBSO):$(OBJS)
	$(CC)  -o $@ $(OBJS) $(OBJS_EXT) -L../libs $(LIBS)
	
	mv $(OBJS) $(OBJ_DIR)
	mv $(PUBSO) ../bin/
	
.c.o:
	$(CC) $(CFLAGS) -c $< $(INCL)
	mkdir -p $(OBJ_DIR)

clean:
	rm -f *.o $(PUBSO) *.bak
	rm -rf $(OBJ_DIR)/
