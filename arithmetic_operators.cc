#include <iostream>

int main() {
  int operando_1{3}, operando_2{9};
  std::cout << operando_1 << " + " << operando_2 << " = " << operando_1 + operando_2 << std::endl;
  std::cout << operando_1 << " - " << operando_2 << " = " << operando_1 - operando_2 << std::endl;
  std::cout << operando_1 << " * " << operando_2 << " = " << operando_1 * operando_2 << std::endl;
  std::cout << operando_2 << " / " << operando_1 << " = " << operando_2 / operando_1 << std::endl;
  std::cout << operando_2 << " % " << operando_1 << " = " << operando_2 % operando_1 << std::endl;
  std::cout << operando_1 << " < " << operando_2 << " = " << (operando_1 < operando_2) << std::endl;
  std::cout << operando_1 << " > " << operando_2 << " = " << (operando_1 > operando_2) << std::endl;
  std::cout << operando_1 << " == " << operando_2 << " = " << (operando_1 == operando_2) << std::endl;

  
}