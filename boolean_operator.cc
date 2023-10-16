/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file boolean_operator.cc
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Oct 14 2023
  * @brief The program reads a truth table  
  * @bug There are no known bugs
  */


#include <iostream>

int main() {
  bool A, B;

  std::cout << "Tabla de la Verdad - Operación AND (Y Lógico)" << std::endl;
  std::cout << "---------------------------------------------" << std::endl;
  std::cout << "A\tB\tAND\tOR\tNOT A\tNOT B" << std::endl;

  A = false;
  B = false;
  std::cout << A << "\t" << B << "\t" << (A && B) << "\t" << (A || B) << "\t"
            << !A << "\t" << !B << std::endl;

  A = false;
  B = true;
  std::cout << A << "\t" << B << "\t" << (A && B) << "\t" << (A || B) << "\t"
            << !A << "\t" << !B << std::endl;

  A = true;
  B = false;
  std::cout << A << "\t" << B << "\t" << (A && B) << "\t" << (A || B) << "\t"
            << !A << "\t" << !B << std::endl;

  A = true;
  B = true;
  std::cout << A << "\t" << B << "\t" << (A && B) << "\t" << (A || B) << "\t"
            << !A << "\t" << !B << std::endl;

  return 0;
}
