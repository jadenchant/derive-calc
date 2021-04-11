#include "Derivative.h"

Derivative::Derivative(const char *e) {
  short i = 0;
  while(e[i]) { ++i; }
  len = i;
  equation = new char[++i];
  for(short j = 0; j <= i; ++j) {
    equation[j] = e[j];
  }
  
  cout << "Being Called" << endl;
}