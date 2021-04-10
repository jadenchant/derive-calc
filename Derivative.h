#ifndef _Derivative_H_
#define _Derivative_H_

class Derivative
{
private:
  char equation[20];
public:
  Derivative(char* equation) {
    short i = 0;
    while (equation[i])
    {
      this->equation[i] = equation[i];
    }
    
    
  }
  ~Derivative() {
    delete [] equation;
  }
};

// Derivative::Derivative(/* args */) {
// }

// Derivative::~Derivative() {
// }


#endif  // _Derivative_H_