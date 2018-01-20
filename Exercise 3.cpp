// Exercise 3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "iostream"
using namespace std;              //EXERCISE 3
                                 //Create a calculator that takes a number, a basic math operator (+, -, *, / , ^), and a second
                                //number all from user input, and have it print the result of the mathematical operation.
                               //The mathematical operations should be wrapped inside of functions.
float sum(float a,float b)
{
	float sum;
	sum = a + b;
	return sum;
}
float sub(float a, float b)
{
	float minus;
	minus = a - b;
	return minus;
}
float div(float a, float b)
{
	float div;
		div = a / b;
	return div;
}
float mult(float a, float b)
{
	float mult;
	mult = a * b;
	return mult;
}
float power(float a, float b)
{
	float power;
	power = pow(a , b);
	return power;
}
int main()
{
	float num1, num2;
	char  operation;
	cout <<  "Enter the calculations => ";
	cin >> num1>>operation>>num2;
	if (operation=='+')
	{
		cout<<"The result = "<<sum(num1, num2);
	}
	else if (operation == '-') {
		cout << "The result = " <<sub(num1, num2);
	}
	else if (operation == '*') {
		cout << "The result = " << mult(num1, num2);
	}
	else if (operation == '^') {
		cout << "The result = " << power(num1, num2);
	}
	else if (operation == '/') {
		if (num2 != 0) {
			cout << "The result = " << div(num1, num2);
		}
		else { 
			cout << " The result = Unknown ";
		}
	}
	else
	{
		cout << " The operation unknown ";
	}
	cout << endl << endl;
    return 0;
}

