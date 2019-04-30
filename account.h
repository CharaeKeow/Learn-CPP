#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
	double balance;

public:
	Account();
	double getBalance() const;
	void deposit(double amount);
	void withdraw(double amount);
};
#endif;
