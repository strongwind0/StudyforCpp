#include<iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
	Rectangle x(0, 0, 0, 0);
	x.compute_area();
	x.compute_per();
	x.show_value();
}