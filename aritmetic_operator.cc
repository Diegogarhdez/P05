/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file aritmetics_operators.cc
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Oct 14 2023
  * @brief The program reads two numbers and show the aritmetics operators. 
  * @bug There are no known bugs
  */

#include <iostream>

int main() {
  int numero1, numero2 ;
  std::cout << "Escribe dos numeritos ;) :" << std::endl;
  std::cin >> numero1 ; 
  std::cin >> numero2 ;
  std::cout << numero1 << " + " << numero2 << " = " << numero1 + numero2 <<
  std::endl;
  std::cout << numero1 << " - " << numero2 << " = " << numero1 - numero2 <<
  std::endl; 
  std::cout << numero1 << " * " << numero2 << " = " << numero1 * numero2 <<
  std::endl;
  std::cout << numero1 << " / " << numero2 << " = " << numero1 / numero2 <<
  std::endl;
  std::cout << numero1 << " % " << numero2 << " = " << numero1 % numero2 <<
  std::endl;

return(0) ;
}
