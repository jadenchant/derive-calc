#include "Derivative.h"

Derivative::Derivative(char* equation) {
  short i = 0;
  while (equation[i])
  {
    this->equation[i] = equation[i];
  }
  
  cout << "Being Called" << endl;
}