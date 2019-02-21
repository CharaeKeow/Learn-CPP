#include <iostream>
#include <cstdlib>
using namespace std;

void play(int m);

int main()
{
	int option;
	int magic;

	magic = rand();

	do {
		cout << "1. Get a new magic number\n";
		cout << "2. Play\n";
		cout << "3. Quit\n";
		do {
			cout << "Enter your choice: ";
			cin >> option;
		} while (option < 1 || option > 3); // The loop will continue to run if the input is not between 1 to 3.

		switch (option) {
		case 1:
			magic = rand();
			break;
		case 2:
			play(magic);
			break;
		case 3:
			cout << "Goodbye\n";
			break;
		}
	} while (option != 3);
}

void play(int m)
{
	int t, x;

	for (t = 0; t < 100; t++) { //That means the user gets 100 attempts.
		cout << "Guess the number: ";
		cin >> x;
		if (x == m) {
			cout << "** Right **\n";
			cout << m << " is the magic number.\n";
			return;
		}
		else
			if (x < m) cout << "Too low.\n";
			else cout << "Too high.\n";
	}
	cout << "You've used up all your guess. Try again. :P\n";
}
