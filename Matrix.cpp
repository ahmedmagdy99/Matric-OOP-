#include "Matrix.h"
#include <iostream>
using namespace std;
Matrix::Matrix()
{
    data = 0;
    row, col = 0;
}
void Matrix::operator+= (Matrix mat2)
{
    for (int i=0 ; i < this->row*this->col ; i++)
    {
        this->data[i] = this->data[i] + mat2.data[i] ;
    }
}

void Matrix::operator-= (Matrix& mat2)
{
    for (int i=0 ; i < this->row*this->col ; i++)
    {
        this->data[i] = this->data[i] - mat2.data[i] ;
    }
}

void Matrix::operator+= (int scalar)
{
    for (int i=0 ; i < this->row*this->col ; i++)
    {
        this->data[i] = this->data[i] + scalar ;
    }
}

void Matrix::operator-= (int scalar)
{
    for (int i=0 ; i < this->row*this->col ; i++)
    {
        this->data[i] = this->data[i] - scalar ;
    }
}

void   Matrix::operator++ ()
{
    for ( int i = 0 ; i < this->row*this->col ; i++ )
    {
        this->data[i]+=1;
    }
}

void Matrix::operator-- ()
{
    for ( int i = 0 ; i < this->row*this->col ; i++ )
    {
        this->data[i]-=1;
    }
}
Matrix &Matrix::operator= (Matrix &mat2){
    for ( int i = 0 ; i < this->row*this->col ; i++ )
    {
        mat2.data[i] = this->data[i];
    }
    return mat2;
}
istream &operator>> (istream& in, Matrix &mat){
    cout << "enter col. and row: ";
    in >> mat.row >> mat.col;
    cout << "Enter your Matrix: ";
    for (int i=0 ; i<mat.row*mat.col ; i++)
    {
        in >> mat.data[i];
    }
    return in;
}

ostream &operator<< (ostream &out, const Matrix &mat)
{
    for (int i = 0; i < mat.row; ++i)
    {
        for (int j = 0; j < mat.col; ++j)
            out << " " << mat.data[i * mat.col + j];
        out << endl;
    }
    return out;
}

Matrix Matrix::operator+  (Matrix mat2)
{
    Matrix mat4;
    int data4[this->row*this->col];
    mat4.createMatrix (this->row, this->col, data4);
    if(this->row==mat2.row&&this->col==mat2.col)
    {
        for (int i = 0; i < this->row*this->col; ++i)
        {
            mat4.data[i]=this->data[i]+mat2.data[i];
        }

        return mat4;
    }
}

Matrix Matrix::operator-  (Matrix mat2)
{
    Matrix mat4;
    int data4[this->row*this->col];
    mat4.createMatrix (this->row, this->col, data4);
    if(this->row==mat2.row&&this->col==mat2.col)
    {
        for (int i = 0; i < this->row*this->col; ++i)
        {
            mat4.data[i]=this->data[i]-mat2.data[i];
        }
    }
    return mat4;
}

Matrix Matrix::operator*  (Matrix mat3)
{
    Matrix mat4;
    int data4[this->row*mat3.col];
    mat4.createMatrix (this->row, mat3.col, data4);
    if(this->col==mat3.row)
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < mat3.col; j++)
            {
                int sum = 0;
                for (int k = 0; k < this->col; k++)
                    sum = sum + this->data[i * this->col + k] * mat3.data[k * mat3.col + j];
                mat4.data[i * mat4.col + j] = sum;
            }

        }
    }
    return mat4;
}

Matrix Matrix::operator+ (int scalar)
{
    Matrix mat4;
    int data4[this->row*this->col];
    mat4.createMatrix (this->row,this->col, data4);
    cout <<endl<<"enter scaler : ";
    int x;
    cin >>x;
    for (int i = 0; i < this->row*this->col; ++i)
    {
        mat4.data[i]=this->data[i]+x;
    }
    return mat4;
}

Matrix Matrix::operator-  (int scalar)
{
    Matrix mat4;
    int data4[this->row*this->col];
    mat4.createMatrix (this->row, this->col,data4);
    cout << endl <<"enter scaler : ";
    int x;
    cin >>x;
    for (int i = 0; i < this->row * this->col; ++i)
    {
        mat4.data[i]=this->data[i]-x;
    }
    return mat4;
}

Matrix Matrix::operator*  (int scalar)
{
    Matrix mat4;
    int data4[this->row*this->col];
    mat4.createMatrix (this->row,this->col, data4);

    cout <<endl<<"enter scaler : ";
    int x;
    cin >>x;
    for (int i = 0; i < this->row*this->col; ++i)
    {
        mat4.data[i]=this->data[i]*x;
    }
    return mat4;
}
void Matrix::createMatrix (int row, int col, int num[])
{
    this->row = row;
    this->col = col;
    this->data.resize (row * col);
    for (int i = 0; i < row * col; i++)
        this->data [i] = num [i];
}


