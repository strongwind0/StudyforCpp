#ifndef _Rectangle_H_
#define _Rectangle_H_

class Rectangle
{
private:
	double length;
	double width;
	double area;
	double perimeter;
public:
	Rectangle(double, double, double, double); 
	void show_value();
	void compute_area();
	void compute_per();
};

#endif
