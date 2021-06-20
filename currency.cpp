#include <iostream>

int main() {

  double pesos;
  double reais;
  double soles;

  double dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  //0.00027

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  //0.20

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  //0.26

  dollars = 0.00027 * pesos + 0.20 * reais + 0.26 * soles;

  std::cout << "US Dollars = $" << dollars << "\n";

}
