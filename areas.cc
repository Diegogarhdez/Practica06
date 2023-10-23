/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file areas.cc
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Oct 23 2023
  * @brief This program reads several descriptions of rectangles and circles, and for each one prints its corresponding area. 
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip>

int main() {
  int valor1;
  std::cin >> valor1;
  std::cout << "recangle ";
  double valor2, valor3;
  std::cin >> valor2;
  std::cin >> valor3;
  std::cout << std::fixed << std::setprecision(6) << valor2 * valor3 << std::endl;
  double valor4;
  std::cout << "circle ";
  std::cin >> valor4;
  std::cout << std::fixed << std::setprecision(6) << valor4 * valor4 * 3.14159265358979323846264338327950 << std::endl;
return 0;
}
