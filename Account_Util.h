#pragma once
#include<vector>
#include"Account.h"
#include"Account_Util.h"
#include"Checking_Account.h"
#include"Savings_Account.h"
#include"Trust_Account.h"
#include"Printable.h"

//Utility helper functions for Account* class
void display(const vector<Account*>& accounts);
void deposit(vector<Account*>& accounts, double amount);
void withdraw(vector<Account*>& accounts, double amount);