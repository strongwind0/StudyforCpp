#include<iostream>
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle(double l, double w, double a, double p)
{
	cout << "请输入长：";
	cin >> l;
	cout << "请输入宽：";
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
	cout << "该长方形面积为" << area << ",周长为" << perimeter << "。" << endl;
}