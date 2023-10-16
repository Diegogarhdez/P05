/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_reminder.cc
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Oct 14 2023
  * @brief The program reads a capital letter and show us the same letter as a
  * lower case 
  * @bug There are no known bugs
  */

#include <iostream>

int main() {
  char caracter = 0;
  std::cout << "Escriba su letra: " << std::endl ;
  std::cin >> caracter ;
  char lowercase = int(caracter) + 32;
  std::cout << "" << lowercase << std::endl;

    return 0;
}

