#include <iostream>

int main() {
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1;
  int answer2;
  int answer3;
  int answer4;

  int max = 0;
  std::string house;

  std::cout << "The Sorting Hat Quiz!\n\n";

  std::cout <<"Q1) When I'm dead, I want people to remember me as:\n\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n\n";

  std::cout << "Enter your selection: ";

  std::cin >> answer1;
  std::cout << "\n";

  switch(answer1) {

    case 1:
    hufflepuff++;
    break;

    case 2:
    slytherin++;
    break;

    case 3:
    ravenclaw++;
    break;

    case 4:
    gryffindor++;
    break;

    default:
    std::cout << "Invalid input.";
  }

  std::cout <<"Q2) Dawn or Dusk?\n\n";
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n\n";

  std::cout << "Enter your selection: ";

  std::cin >> answer2;
  std::cout << "\n";

  switch(answer2) {

    case 1:
    gryffindor++;
    ravenclaw++;
    break;

    case 2:
    slytherin++;
    hufflepuff++;
    break;

    default:
    std::cout << "Invalid input.";
  }

    std::cout <<"Q3) What kind of instrument most pleases your ears?\n\n";
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n\n";

  std::cout << "Enter your selection: ";

  std::cin >> answer3;
  std::cout << "\n";

  switch(answer3) {

    case 1:
    slytherin++;
    break;

    case 2:
    hufflepuff++;
    break;

    case 3:
    ravenclaw++;
    break;

    case 4:
    gryffindor++;
    break;

    default:
    std::cout << "Invalid input.";
  }

    std::cout <<"Q4) Which road tempts you the most?\n\n";
  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through the woods\n";
  std::cout << "  4) The cobbled street lined with ancient buildings\n\n";

  std::cout << "Enter your selection: ";

  std::cin >> answer4;
  std::cout << "\n";

  switch(answer4) {

    case 1:
    hufflepuff++;
    break;

    case 2:
    slytherin++;
    break;

    case 3:
    gryffindor++;
    break;

    case 4:
    ravenclaw++;
    break;

    default:
    std::cout << "Invalid input.";
  }

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }

  if(hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if(ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if(slytherin > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }

  std::cout << "Hmmmm..... where to put you ....\n\n";
  std::cout << "I say ...\n\n";
  std::cout << house <<"!\n\n";


}