/*
        --------------Game Summary ---------------

Rock, Paper, Scissors, Lizad, Spock is a game variant of the traditional "Rock, Paper, Scissors". This game satisfies the law of 5 by giving 5 options rather than three, thus decreasing the probability of a tie.

        -------------- Game Rules ---------------
Rock -- smashes -- Lizard

Paper -- covers -- Rock

Scissors -- cuts -- Paper

Lizard -- poisons -- Spock

Spock -- smashes -- Scissors

Rock -- crushes -- Scissors

Paper -- disproves -- Spock

Scissors -- decapitates -- Lizard

Lizard -- eats -- Paper

Spock -- vaporizes -- rock

*/

#include <iostream>

int main() {

  srand (time(NULL));
  int computer = rand() % 5 + 1;
  std::string computerChoice;

  if(computer == 1 ) {
    computerChoice = "Rock";
  } else if (computer == 2) {
    computerChoice = "Paper";
  } else if (computer == 3) {
    computerChoice = "Scissors";
  } else if (computer == 4) {
    computerChoice = "Lizard";
  } else if (computer == 5) {
    computerChoice = "Spock";
  }

  int user = 0;
  std::string userChoice;



  std::cout <<"----------------------------------------\n";
  std::cout <<"Rock - Paper - Scissors - Lizard - Spock\n";
  std::cout <<"----------------------------------------\n\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n\n";

  std::cout << "Enter your selection: ";
  std::cin >> user;

  if(user == 1 ) {
    userChoice = "Rock";
  } else if (user == 2) {
    userChoice = "Paper";
  } else if (user == 3) {
    userChoice = "Scissors";
  } else if (user == 4) {
    userChoice = "Lizard";
  } else if (user == 5) {
    userChoice = "Spock";
  } else {
    std::cout << "Invalid Input";
  }

  std::cout << "\n";

  if(computer == 1 && user == 2) {
    std::cout << "Computer: Rock\n";
    std::cout << "You: Paper\n\n";
    std::cout << "Paper covers Rock! -- You Win!\n";
  }
  if(computer == 1 && user == 3) {
    std::cout << "Computer: Rock\n";
    std::cout << "You: Scissors\n\n";
    std::cout << "Rock crushes Scissors! -- You Lose!\n";
  }
  if(computer == 1 && user == 4) {
    std::cout << "Computer: Rock\n";
    std::cout << "You: Lizard\n\n";
    std::cout << "Rock smashes Lizard! -- You Lose!\n";
  }
  if(computer == 1 && user == 5) {
    std::cout << "Computer: Rock\n";
    std::cout << "You: Paper\n\n";
    std::cout << "Spock vaporizes Rock! -- You Win!\n";
  }

  if(computer == 2 && user == 1) {
    std::cout << "Computer: Paper\n";
    std::cout << "You: Rock\n\n";
    std::cout << "Paper covers Rock! -- You Lose!\n";
  }
  if(computer == 2 && user == 3) {
    std::cout << "Computer: Paper\n";
    std::cout << "You: Scissors\n\n";
    std::cout << "Scissors cuts Paper! -- You Win!\n";
  }
  if(computer == 2 && user == 4) {
    std::cout << "Computer: Paper\n";
    std::cout << "You: Lizard\n\n";
    std::cout << "Lizard eats Paper! -- You Win!\n";
  }
  if(computer == 2 && user == 5) {
    std::cout << "Computer: Paper\n";
    std::cout << "You: Spock\n\n";
    std::cout << "Paper disproves Spock! -- You Lose!\n";
  }

  if(computer == 3 && user == 1) {
    std::cout << "Computer: Scissors\n";
    std::cout << "You: Rock\n\n";
    std::cout << "Rock crushes Scissors! -- You Win!\n";
  }
  if(computer == 3 && user == 2) {
    std::cout << "Computer: Scissors\n";
    std::cout << "You: Paper\n\n";
    std::cout << "Scissors cuts Paper! -- You Lose!\n";
  }
  if(computer == 3 && user == 4) {
    std::cout << "Computer: Scissors\n";
    std::cout << "You: Lizard\n\n";
    std::cout << "Scissors decapitates Lizard! -- You Lose!\n";
  }
  if(computer == 3 && user == 5) {
    std::cout << "Computer: Scissors\n";
    std::cout << "You: Spock\n\n";
    std::cout << "Spock smashes Scissors!-- You Win!\n";
  }

  if(computer == 4 && user == 1) {
    std::cout << "Computer: Lizard\n";
    std::cout << "You: Rock\n\n";
    std::cout << "Rock smashes Lizard! -- You Win!\n";
  }
  if(computer == 4 && user == 2) {
    std::cout << "Computer: Lizard\n";
    std::cout << "You: Paper\n\n";
    std::cout << "Lizard eats Paper! -- You Lose!\n";
  }
  if(computer == 4 && user == 3) {
    std::cout << "Computer: Lizard\n";
    std::cout << "You: Scissors\n\n";
    std::cout << "Scissors decapitates Lizard! -- You Win!\n";
  }
  if(computer == 4 && user == 5) {
    std::cout << "Computer: Lizard\n";
    std::cout << "You: Spock\n\n";
    std::cout << "Lizard poisons Spock! -- You Lose!\n";
  }

  if(computer == 5 && user == 1) {
    std::cout << "Computer: Spock\n";
    std::cout << "You: Rock\n\n";
    std::cout << "Spock vaporizes Rock! -- You Lose!\n";
  }
  if(computer == 5 && user == 2) {
    std::cout << "Computer: Spock\n";
    std::cout << "You: Paper\n\n";
    std::cout << "Paper disproves Spock -- You Win!\n";
  }
  if(computer == 5 && user == 3) {
    std::cout << "Computer: Spock\n";
    std::cout << "You: Scissors\n\n";
    std::cout << "Spock smashes Scissors! -- You Lose!\n";
  }
  if(computer == 5 && user == 4) {
    std::cout << "Computer: Spock\n";
    std::cout << "You: Lizard\n\n";
    std::cout << "Lizard poisons Spock! -- You Lose!\n";
  }
  if(computer == user) {
    std::cout << "Computer: " << computer << "\n";
    std::cout << "You: " << user << "\n\n";
    std::cout << "You both picked the same! -- It's a Tie!";
  }

}

