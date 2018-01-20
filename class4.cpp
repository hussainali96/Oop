// class4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class desk
{
private:
	int size; int len;
public:
	desk(int a, int b)
	{
		size = a;
		len = b;
	}
	void display()
	{
		cout << " The size is    "<< size << endl;
		cout << " The lenght is  "<< len << endl<<endl;
	}
	void operator -()
	{
		size = -size; // or size*=-1;
		len = -len;   //or len*=-1;
	}
	desk operator==(desk board)
	{
		return board; //or return *this;
	}
};
int main()
{
	desk d1(20, 30);
	desk d2(70, 100);
	d1.display();
	-d1;
	d1.display();
	d2 = d1;
	d2.display();
    return 0;
}

