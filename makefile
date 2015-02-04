EXE = s
OBJECTS = drink.o main.o
SOURCES = main.cpp drink.cpp
CXX = g++ 
all: $(EXE)
	
$(EXE): main.cpp drink.cpp
	$(CXX) -std=c++0x -c -Wall $(SOURCES) -o $(EXE)
WINDOWS: main.cpp drink.cpp
	$(CXX) -std=c++11 -c -Wall $(SOURCES) -o $(EXE)
MAC: main.cpp drink.cpp
  clang++ -std=c++11 -c -Wall -stdlib=libc++ $(SOURCES) -o $(EXE)
clean:
	rm -rf *o $(EXE)
