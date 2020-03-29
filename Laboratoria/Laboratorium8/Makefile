
GCC=g++

# mains
MAIN=$(wildcard *.cpp)
EXE=$(MAIN:.cpp=.exe)

FLAGS=-std=c++17

all: ${EXE}

%.exe: %.cpp
	$(GCC) -o $@ $< ${FLAGS}

.PHONY=clean
clean:
	rm *.exe $(OBJ)
