
GCC=g++

# mains
MAIN=$(wildcard *.cpp)
EXE=$(MAIN:.cpp=.exe)

# objects
OBJSRC=$(wildcard src/*.cpp)
OBJ=$(OBJSRC:.cpp=.o)
FLAGS=-std=c++17

all: ${EXE}

${EXE}: main.cpp ${OBJ}
	${GCC} -o $@ $^ ${FLAGS}

%.o: %.cpp %.hpp
	$(GCC) -o $@ -c $< ${FLAGS}

.PHONY=clean
clean:
	rm *.exe $(OBJ)
