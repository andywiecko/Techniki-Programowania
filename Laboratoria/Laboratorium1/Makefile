all: prog1 prog2

prog1: prog1.cpp
	g++ prog1.cpp -o prog1.exe 

prog2: prog2.cpp
	g++ prog2.cpp -o prog2.exe

.PHONY: clean
clean:
	rm prog1.exe prog2.exe
