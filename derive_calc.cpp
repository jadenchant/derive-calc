#include <iostream>
#include <vector>
#include <string>

#include "Derivative.h"

using namespace std;

int main() {
  cout << "Please enter an equation: " << endl;
  char equationInput[20];
  cin >> equationInput;
  Derivative(equationInput);
  cout << equationInput << endl;
  system("pause");
}