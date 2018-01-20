// array1  h.w7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
                      //hussain ali
int main()      // برنامج لقراءة مصفوفة وطباعة كافة العناصر المصوفة عناصر فردية
{
	int x[5];
	for (int i = 0; i < 5; i++) {
		cout << " x[" << i << "] = ";
		cin >> x[i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		if (x[i] % 2 != 0) {
			cout << " x[" << i << "] = ";
			cout << x[i] << endl;
		}
	}
    return 0;
}

