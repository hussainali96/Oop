// array1 h.w9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
                   //hussain ali
int main()       // برنامج لقرءة عناصر المصفوفتين احاديتين ودمجهما في مصفوفة واحده
{
	int  array1[5], array2[5], array3[10];
	int count1 = 0, count2 = 1;
	for (int i = 0; i < 5; i++) {
		cout << " array1[" << i << "] = ";
		cin >> array1[i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << " array2[" << i << "] = ";
		cin >> array2[i];
	}
	for (int i = 0; i < 5; i++) {
		
		array3[count1] = array1[i];
		array3[count2] = array2[i];
		count1 += 2;
		count2 += 2;
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << " array3[" << i << "] = " << array3[i] << endl;
	}
	cout << endl;
    return 0;
}

