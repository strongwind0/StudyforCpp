#include<iostream>
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle(double l, double w, double a, double p)
{
	cout << "�����볤��";
	cin >> l;
	cout << "�������";
	cin >> w;
	length = l;
	width = w;
	
}

void Rectangle::compute_area()
{
	area = length * width;
}

void Rectangle::compute_per()
{
	perimeter = 2 * (length + width);
}

void Rectangle::show_value()
{
	cout << "�ó��������Ϊ" << area << ",�ܳ�Ϊ" << perimeter << "��" << endl;
}