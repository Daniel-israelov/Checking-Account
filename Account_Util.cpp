#include<vector>
#include"Account.h"
#include"Account_Util.h"
#include"Checking_Account.h"
#include"Savings_Account.h"
#include"Trust_Account.h"
#include"Printable.h"

using namespace std;

void display(const vector<Account*>& accounts)
{
	cout << endl << "=== Accounts =======================================" << endl;
	for (const auto acc : accounts)
		cout << *acc << endl;
}

void deposit(vector<Account*>& accounts, double amount)
{
	cout << endl << "=== Depositing to Account ==========================" << endl;
	for (auto acc : accounts)
	{
		if (acc->deposit(amount))
			cout << "Deposited " << amount << " to " << *acc << endl;
		else
			cout << "Failed Deposit of " << amount << " to " << *acc << endl;
	}
}

void withdraw(vector<Account*>& accounts, double amount)
{
	cout << endl << "=== Withdrawing from Accounts ======================" << endl;
	for (auto acc : accounts)
	{
		if (acc->withdraw(amount))
			cout << "Withdrew " << amount << " from " << *acc << endl;
		else
			cout << "Failed Withdrawal of " << amount << " from " << *acc << endl;
	}
}