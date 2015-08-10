//CC = arm-linux-gcc

PUBSO = alg

CC = g++

CFLAGS = -g -Wall 
INCL = -I. -std=gnu++0x
LIBS = -lpthread -levent 

SOURCES := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp,%.o,$(SOURCES))


all: $(PUBSO)
	@echo $(PUBSO) 

$(PUBSO):$(OBJS)
	$(CC) -o $@ $(OBJS) -L../libs $(LIBS)
	
.cpp.o:
	$(CC) -g $(CFLAG) -c $< $(INCL)
	
clean:
	rm -f *.o $(PUBSO) *.bak