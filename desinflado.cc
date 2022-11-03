#include <iostream>

int main() {
  char letra_entrada;
  std::cout << "Introduzca una letra mayuscula: ";
  std::cin >> letra_entrada;
  std::cout << "\tEntrada\tSalida\n";
  std::cout << "\t" << letra_entrada << "\t" << static_cast<char>(letra_entrada + 32) << std::endl;
}