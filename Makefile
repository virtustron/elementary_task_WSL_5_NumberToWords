src = src/
bin = bin/

all: main


# “-g ”: Generates debugging information

main: build_all
	g++ -g -o $(bin)main $(bin)main.o $(bin)ThreeDigitGroup.o $(bin)RawNumber.o $(bin)NumberToWordsHandler.o $(bin)GroupedNumberWords.o $(bin)GroupedNumber.o $(bin)NumberWordsDictionary.o

build_all:
	g++ -g -o $(bin)NumberWordsDictionary.o -c $(src)NumberWordsDictionary.cpp
	g++ -g -o $(bin)GroupedNumber.o -c $(src)GroupedNumber.cpp
	g++ -g -o $(bin)GroupedNumberWords.o -c $(src)GroupedNumberWords.cpp
	g++ -g -o $(bin)NumberToWordsHandler.o -c $(src)NumberToWordsHandler.cpp
	g++ -g -o $(bin)RawNumber.o -c $(src)RawNumber.cpp
	g++ -g -o $(bin)ThreeDigitGroup.o -c $(src)ThreeDigitGroup.cpp
	g++ -g -o $(bin)main.o -c $(src)main.cpp












