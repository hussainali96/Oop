// class2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CRectangle {
private:
	int width, height;
public:
	void set_values(int, int);
	int area()
	{
		return(width*height);
	}
};
void CRectangle::set_values(int a, int b) {
	width = a;
	height = b;
}
int main()
{
	CRectangle a, *b, *c;
	b = new CRectangle;
	CRectangle *d = new CRectangle[2];
	c = &a;
	a.set_values(1, 2);
	b->set_values(3, 4);
	d->set_values(5, 6);
	d[1].set_values(7, 8);
	cout << "a area: " << a.area() << endl;
	cout << "*b area: " << b->area() << endl;
	cout << "*c area: " <<c->area() << endl;
	cout << "d[0] area: " << d[0].area() << endl;
	cout << "d[1] area: " << d[1].area() << endl;
	delete[] d;
	delete b;
	cout << endl;
    return 0;
}

