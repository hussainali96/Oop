// Exercise 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
                         //EXERCISE 2
                        //Basically the same as exercise 1, but this time, the function that adds the numbers should 
                       //be void, and takes a third, pass by reference parameter; then puts the sum in that.


 void SumNumbers(float x, float y,float &sum) {
	sum = x + y;
}
int main()
{
	float numb1, numb2,sum;
	cout << " Enter the numbers : " << endl;
	cout << " Number 1 : "; cin >> numb1;
	cout << " Number 2 : "; cin >> numb2;
	SumNumbers(numb1, numb2, sum);
	cout << " Sum Numbers : "<<sum;
	cout << endl;
	return 0;
}
