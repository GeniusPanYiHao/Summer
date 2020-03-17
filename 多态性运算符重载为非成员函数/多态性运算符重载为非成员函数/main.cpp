#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class complex
{
public:
	complex(double r = 0.0, double i = 0.0) :rel(r), imag(i){}
	friend complex operator+(const complex &c1, const complex &c2);
	friend complex operator-(const complex &c1, const complex &c2);
	friend ostream& operator<<(ostream &out, const complex& c);
private:
	double rel;
	double imag;
};
complex operator+(const complex &c1, const complex &c2)
{
	return complex(c1.rel + c2.rel, c1.imag + c2.imag);
}
complex operator-(const complex &c1, const complex &c2)
{
	return complex(c1.rel - c2.rel, c1.imag - c2.imag);
}
ostream &operator<<(ostream &out, const complex& c)
{
	out << "(" << c.rel << "," << c.imag << ")";
	return out;
}
int main()
{
	complex c1(5, 4), c2(2,10), c3;
	cout << "c1=" << c1 << endl;
	cout << "c2=" << c2 << endl;
	c3 = c1 - c2;
	cout << "c3=c1-c2=" << c3 << endl;
	c3 = c1 + c2;
	cout << "c3=c1+c2=" << c3 << endl;
	return 0;
}