#include <iostream>
#include "ufoFunctions.hpp"

int main() {
greet();
// enter your codeword or phrase
// if you would like to use a phrase, use "_" instead of a space
std::string codeword = "hireme";

std::string answer = "";
int misses = 0;
std::vector<char> incorrect;
bool guess = false;
char letter;

for (int i = 0; i < codeword.size(); i++) {
  answer+= "_";
}

while(answer != codeword && misses < 7) {

  display_misses(misses);

  display_status(incorrect, answer);

  std::cout  << "\nEnter your guess:";
  std::cin >> letter;

  for(int i = 0; i < codeword.size(); i++) {
    if(letter == codeword[i]) {
      answer[i] = letter;
      guess = true;
    }
  }

  if(guess) {
    display_correct(answer);
    std::cout << "\nCorrect!";
  } else {
    std::cout << "Incorrect! -- That tractor beam pulls the person in closer.";
    incorrect.push_back(letter);
    misses++;
  }

  guess = false;

}

endgame(answer, codeword);

}
