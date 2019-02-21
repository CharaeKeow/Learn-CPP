//Magic number v3, this time adding do-while loop.

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int magic, guess;

	//Remember this require <cstdlib> And it's declare outside loop, so its
	//value won't change.
	magic = rand(); 
	
	do {
		cout << "Enter your guess: ";
		cin >> guess;
		if (guess == magic) {
			cout << "*** Right! ***";
			cout << magic << " is the magic number.\n";
		}
		else {
			cout << "...Sorry, you're wrong.";
			if (guess > magic)
				cout << "Your guess is too high.\n";
			else
				cout << "Your guess is too damn low.\n";
		}
	} while (guess != magic);

	return 0;
}
