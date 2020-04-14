#include<iostream>
#include"Matrix.h"
using namespace std;

int main()
{
	Matrix mat1;
	Matrix mat2;
	Matrix mat;
	cout << "请输入第一个矩阵" << endl;
	mat1.input();
	cout << "请输入第二个矩阵" << endl;
	mat2.input();
	cout << "第一个矩阵为" << endl;
	mat1.display();
	cout << "第二个矩阵为" << endl;
	mat2.display();
	mat = mat1 + mat2;
	cout << "矩阵之和为" << endl;
	mat.display();
}