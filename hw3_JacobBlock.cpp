/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//HW3
//Jacob Block

#include <iostream>
#include <limits.h>
using namespace std;

int main() {
	string secretWords[5] = { "academic","capacity","favorite","accurate", "ceremony" };
	int chosenNumber = 0;
	string chosenWord = "";
	char guess = 'o';
	string encodedWord = "********";
	int i = 0;
	int count = 0;
	cout << "Please enter a number between 0 and 4: ";
	cin >> chosenNumber;
	while (!cin || chosenNumber > 4 || chosenNumber < 0) {
		cin.clear();
        cin.ignore(INT_MAX, '\n');
		cout << "Error. Try again: ";
		cin >> chosenNumber;
	}
	chosenWord = secretWords[chosenNumber];
	while (encodedWord != secretWords[chosenNumber]) {
		cout << "Guess a letter in the secret word: " << encodedWord << endl << "Your guess: ";
		cin >> guess;
		for (i = 0; i < 8; ++i) {
			if (chosenWord[i] == guess) {
				encodedWord[i] = guess;
			}
		}
		++count;
	}
	cout << "Good job!" << endl << "You guessed the word accepted in " << count << " tries.";
	return 0;
}