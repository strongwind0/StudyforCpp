#ifndef _COMPLEX_
#define _COMPLEX_

class Complex
{
private:
	double real;
	double imag;
public:
	Complex(double = 0, double = 0);
	friend Complex operator*(Complex& a, Complex& b);
	friend Complex operator/(Complex& a, Complex& b);
	void Print();
};

#endif
