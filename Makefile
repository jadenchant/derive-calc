all: Derivative.o derive_calc.o derive_calc

Derivative.o: Derivative.cpp Derivative.h
	g++ -g -Wall -c Derivative.cpp

derive_calc.o: derive_calc.cpp Derivative.h
	g++ -g -Wall -c derive_calc.cpp

derive_calc: derive_calc.o Derivative.o
	g++ -g -Wall derive_calc.o Derivative.o