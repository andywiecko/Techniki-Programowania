
GCC=g++

SRC=$(wildcard *.cpp)
EXE=$(SRC:.cpp=.exe)

all: ${EXE}

%.exe: %.cpp
	${GCC} $< -o $@ -std=c++17

.PHONY=clean
clean:
	rm *.exe
