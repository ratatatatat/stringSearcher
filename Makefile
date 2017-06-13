CC := gcc
CXX := g++
CFLAGS := -g -Wall
CXXFLAGS := -g -Wall
INCLUDES := -I ./include
DIR := $(shell pwd)/bin
LDFLAGS := -L$(DIR)
ARCH := ar
ARCHOPS := rcs


tests:library
	$(CC) $(CFLAGS) ./test/test.c $(INCLUDES) $(LDFLAGS) -lsearcher -o ./test/bin/test.o

setup:
	echo "Performing Setup"

library:
	$(CC) -c ./src/Searcher.c -L -lstring -o ./bin/Searcher.o
	$(ARCH) $(ARCHOPS) ./bin/libsearcher.a ./bin/Searcher.o