// Course:  CS213 - Programming II  - 2018
// Title:   Assignment II - Task 1 - Problem 2
// Program: CS213-2018-A2-T1-P2
// Purpose: Skeleton code for the student to start working
// Author:  Ahmed Magdy / Ahmed Mostafa
// Date:    10 August 2018
// Version: 1.0

#include <iostream>
#include <iomanip>
#include <valarray>
#include <cassert>
#include "Matrix.h"
using namespace std;

int main()
{

    int data1 [] = {1,2,3,4,5,6,7,8};
    int data2 [] = {13,233,3,4,5,6,1,2};
    int data3 [] = {10,100,10,100,10,100,10,100};
    int data4 [] = {10,11,12,13,14,15,16,17};
    int data5 [] = {20,200,20,200,20,200,20,200};
    int x, y;

    Matrix mat1, mat2, mat3, mat4, mat5;
    mat1.createMatrix (4, 2, data1);
    mat2.createMatrix (4, 2, data2);
    mat3.createMatrix (2, 4, data3);
    mat4.createMatrix (2, 4, data4);
    mat5.createMatrix (2, 4, data5);

    cout << "matrix 1: " << endl << mat1 <<endl;
    cout << "matrix 2: " << endl << mat2 <<endl;
    cout << "matrix 3: " << endl << mat3 <<endl;
loop:
    cout <<endl<<" Choose"<<endl<<endl;
    cout << ("1- mat1 + mat2") << endl ;
    cout << ("2- mat1 - mat2") << endl ;
    cout << ("3- mat1 * mat2") << endl ;
    cout << ("4- mat1 + scaler") << endl ;
    cout << ("5- mat1 - scaler") << endl ;
    cout << ("6- mat1 * scaler") << endl ;
    cout << ("7- mat1 += mat2") << endl ;
    cout << ("8- mat1 -= mat2") << endl ;
    cout << ("9- mat1 += scaler") << endl ;
    cout << ("10- mat1 -= scaler") << endl ;
    cout << ("11- mat++") << endl ;
    cout << ("12- mat--") << endl ;
    cout << ("13- Mat1=Mat2") << endl;
    cout << ("14- enter new matrix") << endl ;
    cout<<"0- end"<<endl;
    int need;
    cin>>need;
    if (need==0)
    {
        return 0;
    }
    if (need==1)
    {

        cout << (mat1 + mat2) << endl << endl;
        goto loop;
    }


    if (need==2)
    {

        cout << (mat1 - mat2) << endl << endl;
        goto loop;
    }

    if (need==3)
    {

        cout << (mat1 * mat3) << endl << endl;
        goto loop;
    }

    if (need==4)
    {

        cout << (mat1+2) << endl << endl;
        goto loop;
    }

    if (need==5)
    {

        cout << (mat1-2) << endl << endl;
        goto loop;
    }

    if (need==6)
    {

        cout << (mat1*2) << endl << endl;
        goto loop;
    }
    if (need==7)
    {
        mat1 += mat2;
        cout << mat1 << endl << endl;
        goto loop;
    }
    if (need==8)
    {
        mat1 -= mat2;
        cout << mat1 << endl << endl;
        goto loop;
    }
    if (need==9)
    {
        cout << endl;
        cout << "which matrix you want to change? " << endl;
        cout << "1-mat1 , 2-mat2 , 3-mat3" << endl;
        cin >> y;
        switch (y)
        {
        case 1:
            cout << "enter the scalar: " ;
            cin >> x;
            mat1+=x;
            cout << mat1 << endl << endl;
            break;
        case 2:
            cout << "enter the scalar: " ;
            cin >> x;
            mat2+=x;
            cout << mat2 << endl << endl;
            break;
        case 3:
            cout << "enter the scalar: " ;
            cin >> x;
            mat3+=x;
            cout << mat3 << endl << endl;
            break;
        }
        goto loop;
    }
    if (need==10)
    {
        cout << endl;
        cout << "which matrix you want to change? " << endl;
        cout << "1-mat1 , 2-mat2 , 3-mat3" << endl;
        cin >> y;
        switch (y)
        {
        case 1:
            cout << "enter the scalar: " ;
            cin >> x;
            mat1-=x;
            cout << mat1 << endl << endl;
            break;
        case 2:
            cout << "enter the scalar: " ;
            cin >> x;
            mat2-=x;
            cout << mat2 << endl << endl;
            break;
        case 3:
            cout << "enter the scalar: " ;
            cin >> x;
            mat3-=x;
            cout << mat3 << endl << endl;
            break;
        }
        goto loop;
    }
    if (need==11)
    {
        cout << "which matrix you want to change? " << endl;
        cout << "1-mat1 , 2-mat2 , 3-mat3" << endl;
        cin >> y;
        switch (y)
        {
        case 1:
            ++mat1;
            cout << mat1 << endl << endl;
            break;
        case 2:
            ++mat2;
            cout << mat2 << endl << endl;
            break;
        case 3:
            ++mat3;
            cout << mat3 << endl << endl;
            break;
        }
        goto loop;
    }
    if (need==12)
    {
        cout << "which matrix you want to change? " << endl;
        cout << "1-mat1 , 2-mat2 , 3-mat3" << endl;
        cin >> y;
        switch (y)
        {
        case 1:
            --mat1;
            cout << mat1 << endl << endl;
            break;
        case 2:
            --mat2;
            cout << mat2 << endl << endl;
            break;
        case 3:
            --mat3;
            cout << mat3 << endl << endl;
            break;
        }
        goto loop;
    }
    if (need==13)
    {
            mat1 = mat2;
            cout << "matrix 1: " << endl << mat1 <<endl;
    cout << "matrix 2: " << endl << mat2 <<endl;
            goto loop;
    }
    if (need==14)
    {
        cin >> mat4;
        cout << endl;
        cout << mat4;
        goto loop;
    }

    return 0;
}
