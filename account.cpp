#include "account.h"

Account::Account()
{
	balance = 0.0;
}

double Account::getBalance() const
{
	return balance;
}

void Account::deposit(double amount)
{
	balance += amount;
}

void Account::withdraw(double amount)
{
	balance -= amount;
}
