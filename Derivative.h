#ifndef _Derivative_H_
#define _Derivative_H_

#include <iostream>

using namespace std;

class Derivative
{
private:
  char *equation;
  short len;

public:
  // Constructor
  Derivative(const char *equation);

  Derivative();

  // I forgot how to do this
  ~Derivative() {
    // delete equation;
  }
};

// Derivative::Derivative(/* args */) {
// }

// Derivative::~Derivative() {
// }


#endif  // _Derivative_H_