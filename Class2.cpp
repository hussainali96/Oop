#include<iostream>
using namespace std;
class Stage
{
private:
	int x; int y;
public:
	Stage() {}
	Stage(int a, int b) {
		x = a;
		y = b;
	}
	void out() {
		cout << " The x is : " << x << endl << endl;
	}
	Stage operator +(Stage prim);

};
Stage Stage::operator+(Stage prim)
{
	Stage temp;
	temp.x = x+prim.x;
	return temp;
}
int main()
{
	Stage a(3, 4), b(10, 20), c;
	c = a.operator +(b);
	cout << " The value of a class is : ";
	a.out();
	cout << " The value of b class is : ";
	b.out();
	cout << " The value of c class is : ";
	c.out();
	cout << " -----------------( END )------------------ " << endl << endl;
    return 0;
}

