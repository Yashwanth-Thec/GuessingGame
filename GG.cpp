/*
  Description: This is a Gussing game where the user has to guess any number from 1-100 and the program tell if the number is too high or too low.
  After the user guesses the number correctly then the program asks user if they want to play again or not.

  Name: Yashwanth Narayan Shravanaboyina Besta
  Date: 9/8/25

  Three rules of C++
  1) No Global Variables
  2) No strings Ever
  3) Always include <iostream>

*/

#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    
    bool playAgain = true;
    char choice;
    srand(time(NULL));

    // As long as the user wants to play the program runs this
    while (playAgain) {

      //Genetare Random Integer
       int secretNumber = rand() % 100 + 1;
       int guess;
       int numGuesses = 0;

        cout << "I have picked a number between 1 and 100. Can you guess it?" << endl;
	// As long as the user hasn't guessed the random number this keeps repeating
        do {
            cout << "Enter your guess: ";
            cin >> guess;
            numGuesses++;
	    //Tell if guess to low
            if (guess < secretNumber) {
	      cout << "Too low! Try again." << endl;
            }
	    //tells if Guess to high
	    else if (guess > secretNumber) {
	      cout << "Too high! Try again." << endl;
            }
	    //Tell if guess correct
	    else {
	      cout << "Congratulations! You guessed the number in " << numGuesses << " tries." << endl;
            }

        } while (guess != secretNumber);

        // Ask if the user wants to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;

        //If user dosnt want to play then this sets the boolean to false and stops the game
        if (choice != 'y' && choice != 'Y') {
            playAgain = false;
            cout << "Thanks for playing!" << endl;
        }

        cout << endl;
    }

    return 0;
}















  

