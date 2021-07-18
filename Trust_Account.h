#pragma once
#include"Savings_Account.h"
using namespace std;

class Trust_Account : public Savings_Account
{
private:
	static constexpr const char* def_name = "Unamed Trust Account";
	static constexpr int max_withdrawals = 3;
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
	static constexpr double bonus_amount = 50.0;
	static constexpr double bonus_threshold = 5000.0;
	static constexpr double max_withdraw_percent = 0.2;
protected:
	int num_withdrawals;
public:
	Trust_Account(string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
	virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount)override;
	virtual ~Trust_Account() = default;
	virtual void print(ostream& os)const override;
};