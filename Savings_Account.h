#pragma once
#include"Account.h"
using namespace std;

class Savings_Account : public Account
{
private:
	static constexpr const char* def_name = "Unamed Savings Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
protected:
	double int_rate;
public:
	Savings_Account(string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
	virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount)override;
	virtual ~Savings_Account() = default;
	virtual void print(ostream& os)const override;

};

