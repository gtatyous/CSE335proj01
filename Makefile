all: proj01

proj01: main.o drink.o
	g++ main.o drink.o -o proj01

main.o: main.cpp drink.h
	g++ -c -Wall main.cpp

drink.o: drink.cpp drink.h
	g++ -c -Wall drink.cpp

clean:
	rm *o proj01

