#include<iostream>
#include"Complex.h"
using namespace std;

int main()
{
	Complex a(6, 3);
	Complex b(3, 4);
	Complex c;
	c = a * b;
	c.Print();
	c = a / b;
	c.Print();

}