#include<iostream>
#include"Matrix.h"
using namespace std;

int main()
{
	Matrix mat1;
	Matrix mat2;
	Matrix mat;
	cout << "�������һ������" << endl;
	mat1.input();
	cout << "������ڶ�������" << endl;
	mat2.input();
	cout << "��һ������Ϊ" << endl;
	mat1.display();
	cout << "�ڶ�������Ϊ" << endl;
	mat2.display();
	mat = mat1 + mat2;
	cout << "����֮��Ϊ" << endl;
	mat.display();
}