all: proj01

proj01: main.o drink.o
	g++ -std=c++11 main.o drink.o -o proj01

main.o: main.cpp drink.h
	g++ -std=c++11 -c -Wall main.cpp

drink.o: drink.cpp drink.h
	g++ -std=c++11 -c -Wall drink.cpp

clean:
	rm *o proj01

