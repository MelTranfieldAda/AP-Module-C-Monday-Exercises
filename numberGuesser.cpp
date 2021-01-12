#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
  int guess;
  int difficultyLevel;

  char newGame = 'Y';

  while(newGame == 'Y') {
    srand (time(NULL));
    cout << "Let’s play ‘Guess the Number’. \n";

    cout << "Please pick a difficulty level (1, 2 or 3)? \n";
    cin >> difficultyLevel;

    int randomNumber;

    if (difficultyLevel == 1) {
      cout << "Great, I have randomly picked a number in the range 1 - 10 \n";
      randomNumber = rand() % 10 + 1;
    } else if (difficultyLevel == 2) {
      cout << "Great, I have randomly picked a number in the range 1 - 100 \n";
      randomNumber = rand() % 100 + 1;
    } else if (difficultyLevel == 3) {
      cout << "Great, I have randomly picked a number in the range 1 - 1000 \n";
      randomNumber = rand() % 1000 + 1;
    }

    cout << "What's your guess? \n";
    cin >> guess;

    int count = 1;

    while (randomNumber != guess) {
      count++;
      if (randomNumber > guess) {
        cout << "Too low, guess again: ";
      } else {
        cout << "Too high, guess again: ";
      }
      cin >> guess;
    }

    cout << "Well done, the number was " << randomNumber << " – you got it in " << count << " guesses. \n";


    cout << "Do you want to play again (Y/N)?";
    cin >> newGame;
  }

  cout << "No problem, bye!";
}