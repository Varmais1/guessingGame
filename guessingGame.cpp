/*Collaborator(s): Ishaan Varma
What this file does: Has all the code to make the guessing game functional
Date: 9/15/2022
 */
//adds the console input and output
#include <iostream>
//makes it so that I don't have to type std:: before cin and cout
using namespace std;

//main
int main()
{
  //sets the seed to the default seed, which changes constantly
  srand(time(NULL));
  bool playAgain = true;
  //
  while(playAgain == true) {
  //print the rules
  cout << "This is a guessing game." << endl;
  cout << "Guess a number between 0 and 100 inclusive." << endl;
  //generate random num between 0 and 100
  int number = rand() % 101;
  //variable for user's guess
  int userGuess = 101;
  //variable for number of guesses
  int guesses = 0;
  //for testing purposes
  cout << "number: " << number << endl;
  //while the users guess isn't right...
  while(userGuess != number) {
    //increment the num of guesses by one
    guesses++;
    //get the user's guess
    cin >> userGuess;
    //tells the user if their number is too high or too low
    if(userGuess > number) {
      cout << "Your guess was too high." << endl;
    }
    else if(userGuess < number) {
      cout << "Your guess was too low." << endl;
    }
  }
  //tell the user that they guessed correct, and display the amount of guesses
  cout << "You guessed correct!" << endl;
  cout << "You took " << guesses << " guesses." << endl;
  //where user's status input is stored
  char statusInput = 'a';
  //while valid input isn't given, get input
  while(statusInput != 'Y' && statusInput != 'N') {
    cout << "Do you want to play again? Type Y/N." <<endl;
    cin >> statusInput;
    //for testing purposes
    //cout << statusInput << endl;
  }
  //if the user wants to play again, play again
  if(statusInput == 'Y') {
    playAgain = true;
  }
  //if the user wants to stop, stop
  else {
    playAgain = false;
  }
  }
  //end program
  return 0;
}
