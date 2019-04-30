#include <iostream>
#include <iomanip>
#include "account.h"
using namespace std;

void main()
{
	Account acc;
	cout << "Your account balance is : " << setw(5) << acc.getBalance() << endl;
	acc.deposit(100.0);
	cout << "Your account balance is : " << setw(5) << acc.getBalance() << endl;
	acc.withdraw(50.0);
	cout << "Your account balance is : " << setw(5) << acc.getBalance() << endl;
}
