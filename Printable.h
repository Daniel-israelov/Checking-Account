#pragma once
#include<iostream>
using namespace std;

class Printable
{
	friend ostream& operator<<(ostream& os, const Printable& object);
public:
	virtual ~Printable() = default;
	virtual void print(ostream& os)const = 0;

};