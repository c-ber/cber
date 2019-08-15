//CC = arm-linux-gcc

PUBSO = watch

CC = gcc

CFLAGS = -g -Wall

INCL = -I. -I../common/

LIBS = -lpthread

OBJ_DIR = objs

SOURCES := $(wildcard *.c)

OBJS := $(patsubst %.c,%.o,$(SOURCES))


all: $(PUBSO)
	@echo $(PUBSO) 
	

$(PUBSO):$(OBJS)
	$(CC)  -o $@ $(OBJS) -L../libs $(LIBS)
	mv $(OBJS)  objs
	mv $(PUBSO) ../bin/
	
.c.o:
	$(CC) $(CFLAGS) -c $< $(INCL)
	mkdir -p objs
	
clean:
	rm -f *.o $(PUBSO) *.bak
	rm -rf $(OBJ_DIR)/