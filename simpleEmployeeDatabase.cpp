//A simple employee database system
#include <iostream>
using namespace std;

//Remember: For 2D array, the first index is row, while the second index is column.
/*
For example: 
int num[2][3];

The array will be:

0 1 2 3 : Right index
1
2: Left index
*/
char name[10][80]; //holds employee names
char phone[10][20];
float hours[10];
float wage[10];

int menu();
void enter(), report();

int main()
{
	int choice;

	do {
		choice = menu(); //get selection
		switch (choice) {
		case 0: break;
		case 1: 
			enter();
			break;
		case 2: 
			report();
			break;
		default:
			cout << "Try again. \n\n";
		}
	} while (choice != 0);

	return 0;
}

//Return a user's selection.
int menu()
{
	int choice;

	cout << "0. Quit." << endl;
	cout << "1. Enter information" << endl;
	cout << "2. Report information" << endl;
	cout << "\nChoose one: ";
	cin >> choice;

	return choice;
}

//Enter info
void enter()
{
	int i;	

	for (i = 0; i < 10; i++) {
		cout << "Enter last name: ";
		cin >> name[i];
		cout << "Enter phone number: ";
		cin >> phone[i];
		cout << "Enter number of hours worked: ";
		cin >> hours[i];
		cout << "Enter wage: ";
		cin >> wage[i];
	}	
}

//Display report
void report()
{
	int i;

	for (i = 0; i < 10; i++) {
		cout << name[i] << ' ' << phone[i] << endl;
		cout << "Pay for the week: " << wage[i] * hours[i];
		cout << '\n';
	}
}
