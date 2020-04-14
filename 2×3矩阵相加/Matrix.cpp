#include<iostream>
using namespace std;
#include"Matrix.h"

Matrix::Matrix()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			this->mat[i][j] = 0;
		}
	}
}

void Matrix::input()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "请输入第" << i + 1 << "行，第" << j + 1 << "列数字：";
			cin >> this->mat[i][j];
		}
	}
	cout << endl;
}

void Matrix::display()
{
	for (int i = 0; i < 2; i ++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << this->mat[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
}

Matrix operator+(Matrix &mat1, Matrix &mat2)
{
	Matrix mat;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mat.mat[i][j] = mat1.mat[i][j] + mat2.mat[i][j];
		}
	}
	return mat;
}