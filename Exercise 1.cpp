// Exercise 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
                               //EXERCISE 1
                               //Write a program with a function that takes two int parameters, adds them together, then 
                               //returns the sum.The program should ask the user for two numbers, then call the function 
                               //with the numbers as arguments, and tell the user the sum.

float SumNumbers(float x, float y) {
	float sum;
	sum = x + y;
	return sum;
}
int main()
{
	float numb1, numb2;
	cout << " Enter the numbers : " << endl;
	cout << " Number 1 : "; cin >> numb1;
	cout << " Number 2 : "; cin >> numb2;
	cout << " Sum Numbers : " << SumNumbers(numb1, numb2) << endl;
    return 0;
}

