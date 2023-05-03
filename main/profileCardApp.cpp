#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Joe Schmoe", 30, "New York", "USA", "he/him");
  sam.add_hobby("listening to podcasts");
  sam.add_hobby("bowling");
  sam.add_hobby("play rec kickball");
  sam.add_hobby("write novels");
  sam.add_hobby("read advice columns");

  std::cout << sam.view_profile();


}