derive_calc: derive_calc.cpp Derivative.cpp Derivative.h
	make Derivative
	make derive_calc.o
	g++ -g -Wall derive_calc.o Derivative.o

Derivative: Derivative.cpp Derivative.h
	g++ -g -Wall -c Derivative.cpp

derive_calc.o: derive_calc.cpp Derivative.h
	g++ -g -Wall -c derive_calc.cpp

