#include "Printable.h"
#include<iostream>
using namespace std;

ostream& operator<<(ostream& os, const Printable& object)
{
	object.print(os);
	return os;
}