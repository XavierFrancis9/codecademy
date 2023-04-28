#include <iostream>
#include <cstdlib>

int main() {
  std::cout << "MAGIC RIZZ-BALL: ";

  srand(time(NULL));

  int answer = std::rand() % 10;

  switch(answer) {
    case 0:
    std::cout << "on god on good for real";
    break;

    case 1:
    std::cout << "hell yea dude";
    break;

    case 2:
    std::cout << "for sure my guy";
    break;

    case 3:
    std::cout << "100%";
    break;

    case 4:
    std::cout << "could be fact ... or could be cap";
    break;

    case 5:
    std::cout << "who knows ... not me.";
    break;

    case 6:
    std::cout << "idk fam";
    break;

    case 7:
    std::cout << "nah";
    break;

    case 8:
    std::cout << "not a chance my guy";
    break;

    case 9:
    std::cout << "you're not that guy";
    break;

    case 10:
    std::cout << "straight cap";
    break;
  }
}