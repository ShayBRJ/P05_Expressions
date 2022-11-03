#include <iostream>

int main() {
  bool p, q;
  std::cout << "TABLA DE VERDAD\n";
  std::cout << "p\tq\tp!\tp|q\tp&q\n";
  p = false;
  q = false;
  std::cout << p << "\t";
  std::cout << q << "\t";
  std::cout << !p << "\t";
  std::cout << (p || q)<< "\t";
  std::cout << (p && q);
  std::cout << std::endl;
  p = false;
  q = true;
  std::cout << p << "\t";
  std::cout << q << "\t";
  std::cout << !p << "\t";
  std::cout << (p || q)<< "\t";
  std::cout << (p && q);
  std::cout << std::endl;
  p = true;
  q = false;
  std::cout << p << "\t";
  std::cout << q << "\t";
  std::cout << !p << "\t";
  std::cout << (p || q)<< "\t";
  std::cout << (p && q);
  std::cout << std::endl;
  p = true;
  q = true;
  std::cout << p << "\t";
  std::cout << q << "\t";
  std::cout << !p << "\t";
  std::cout << (p || q)<< "\t";
  std::cout << (p && q);
  std::cout << std::endl;
}
