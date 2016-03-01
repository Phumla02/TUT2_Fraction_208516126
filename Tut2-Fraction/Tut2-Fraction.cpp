#include<iostream>
using namespace std;

class Fraction

{
public:
	Fraction(int = 0, int = 0);
	~Fraction();

	void Add(Fraction,Fraction);
	void Subtract(Fraction, Fraction);
	void Multiply(Fraction, Fraction);
	void Divide(Fraction, Fraction);
	void setDenom(Fraction &);
	void setNum(Fraction &);
	int getDenon();
	int getNum();
	void print();

private:
	int num;
	int denom;
};