#ifndef Matrix_H
#define Matrix_H
#include <iostream>
#include <valarray>
#include <cassert>
using namespace std;
class Matrix
{
    friend ostream &operator << (ostream &, const Matrix &);
    friend istream &operator >> (istream &, Matrix &);

public:
    Matrix();
    void createMatrix (int row, int col, int num[]);
    Matrix operator+  (Matrix);
    Matrix operator-  (Matrix);
    Matrix operator*  (Matrix);
    Matrix operator+  (int);
    Matrix operator-  (int);
    Matrix operator*  (int);

    Matrix &operator= (Matrix &);
    void operator+= (Matrix);
    void operator-= (Matrix&);
    void operator+= (int);
    void operator-= (int);
    void operator++ ();
    void operator-- ();


protected:

private:
    valarray <int> data;
    int row, col;
};

#endif // Matrix_H
