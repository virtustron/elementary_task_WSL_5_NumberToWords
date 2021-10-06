src = src/
bin = bin/

all: main


# “-g ”: Generates debugging information

main: build_all
	g++ -g -o $(bin)main $(bin)main.o $(bin)ThreeDigitGroup.o

build_all:
	g++ -g -o $(bin)ThreeDigitGroup.o -c $(src)ThreeDigitGroup.cpp
	g++ -g -o $(bin)main.o -c $(src)main.cpp












