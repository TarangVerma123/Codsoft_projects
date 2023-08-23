#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int val, val_guessed, no_of_guess = 0;
	srand(time(0));
	val= rand() % 100 + 1; // random number between 1 and 100
	cout << "Number Guessing Game\n\n";

	do
	{
		cout << "Guess a number between 1 and 100 : ";
		cin >> val_guessed;
		no_of_guess++;

		if (val_guessed > val)
			cout << "The guess is too high!\n\n";
		else if (val_guessed < val)
			cout << "The guess is too low!\n\n";
		else
			cout << "\nCorrect guess , the number is  "<<val << " and the Attempts made are: "<< no_of_guess <<endl;
	} while (val_guessed != val);

	return 0;
}