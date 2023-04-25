#include <iostream>

int main() {

  int input;
  int earthWeight;
  int newWeight;
  double mercuryGrav = 0.38;
  double venusGrav = 0.91;
  double marsGrav = .38;
  double jupiterGrav = 2.34;
  double saturnGrav = 1.06;
  double uranusGrav = .92;
  double neptuneGrav = 1.19;

  std::cout << "Please enter your weight: ";
  std::cin >> earthWeight;

  std::cout << "\n# - Planet ----- Relative Gravity\n";
  std::cout << "1 - Mercury ---- 0.38\n";
  std::cout << "2 - Venus ------ 0.91\n";
  std::cout << "3 - Mars ------- 0.38\n";
  std::cout << "4 - Jupiter ---- 2.34\n";
  std::cout << "5 - Saturn ----- 1.06\n";
  std::cout << "6 - Uranus ----- 0.92\n";
  std::cout << "7 - Neptune ---- 1.19\n\n";

  std::cout << "Enter the number of the planet you want to fight on: \n";
  std::cin >> input;
  switch(input) {

    case 1:
    newWeight = earthWeight * mercuryGrav;
    std::cout << "\nYou selected: Mercury\n";
    std::cout << "Your weight on this planet is: " << newWeight << "lbs\n";
    break;

    case 2:
    newWeight = earthWeight * venusGrav;
    std::cout << "\nYou selected: Venus\n";
    std::cout << "Your weight on this planet is: " << newWeight << "lbs\n";
    break;

    case 3:
    newWeight = earthWeight * marsGrav;
    std::cout << "\nYou selected: Mars\n";
    std::cout << "Your weight on this planet is: " << newWeight << "lbs\n";
    break;

    case 4:
    newWeight = earthWeight * jupiterGrav;
    std::cout << "\nYou selected: Jupiter\n";
    std::cout << "Your weight on this planet is: " << newWeight << "lbs\n";
    break;

    case 5:
    newWeight = earthWeight * saturnGrav;
    std::cout << "\nYou selected: Saturn\n";
    std::cout << "Your weight on this planet is: " << newWeight << "lbs\n";
    break;

    case 6:
    newWeight = earthWeight * uranusGrav;
    std::cout << "\nYou selected: Uranus\n";
    std::cout << "Your weight on this planet is: " << newWeight << "lbs\n";
    break;

    case 7:
    newWeight = earthWeight * neptuneGrav;
    std::cout << "\nYou selected: Neptune\n";
    std::cout << "Your weight on this planet is: " << newWeight << "lbs\n";
    break;

    default:
    std::cout << "\nInvalid Response\n";

  }

}