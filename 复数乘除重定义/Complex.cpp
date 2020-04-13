#include<iostream>
#include"Complex.h"
using namespace std;

Complex c;

Complex::Complex(double r, double i) :real(r), imag(i)
{
}

Complex operator*(Complex& a, Complex& b)
{
	return Complex(a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real);
}

Complex operator/(Complex& a, Complex& b)
{
	return Complex((a.real * b.real + a.imag * b.imag) / (b.real * b.real + b.imag * b.imag), (a.imag * b.real - a.real * b.imag) / (b.real * b.real + b.imag * b.imag));
}

void Complex::Print()
{
	cout << "(" << real << "," << imag << ")" << endl;
}