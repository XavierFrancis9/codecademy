#include <iostream>

int main() {
  int pesos;
  double pesostoUSD = .00022;
  int reais;
  double reaistoUSD = .2;
  int soles;
  double solestoUSD = .27;
  double dollars;

  std::cout<<"Enter number of Colombian Pesos: ";
  std::cin>>pesos;

  std::cout<<"Enter number of Brazilian Reais: ";
  std::cin>>reais;

  std::cout<<"Enter number of Peruvian Soles: ";
  std::cin>>soles;

dollars = (pesos * pesostoUSD) + (reais * reaistoUSD) + (soles * solestoUSD);

std::cout<<"US Dollars = $"<<dollars<<"\n";
}