// Exercise 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
                       //Exercise 4:
                      //Write a C++ program to transfer inchs to centimeters(1 inch = 2.54 cintimeters)
float transfer(float inch) {
	float cm= inch * 2.54;
	return cm;
}
int main()
{
	float num;
	cout << " Enter the inch number = ";
	cin >> num;
	cout << " The result of transfer inch to centimeters = " << transfer(num)<<" cm ";
	cout << endl;

    return 0;
}

