#ifndef _MATRIX_H_
#define _MATRIX_H_

class Matrix 
{
private:
	int mat[2][3];
public:
	Matrix();
	void input();
	void display();
	friend Matrix operator+(Matrix&, Matrix&);
};

#endif
