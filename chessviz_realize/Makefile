.PHONY: all clean install uninstall
GCCFLAGS = -c -Wall -Werror
VPATH = src
PATH_SRC = ./src/
PATH_BUILD = ./build/

all: prog

prog: main.o print_board.o desc.o
	g++ main.o print_board.o desc.o -o $(PATH_BUILD)prog

main.o: main.cpp
	g++ $(GCCFLAGS) $(PATH_SRC)main.cpp

print_board.o: print_board.cpp
	g++ $(GCCFLAGS) $(PATH_SRC)print_board.cpp

desc.o: desc.cpp
	g++ $(GCCFLAGS) $(PATH_SRC)desc.cpp

clean: rm -rf *.o
