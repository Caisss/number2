#ifndef NUMBER_H
#define NUMBER_H
#include<iostream>
#include<complex>
using namespace std;
class Number
{
public:
	virtual void print()=0;
};
class RealNumber:public Number
{
public:
	double x;
	RealNumber() {}
	RealNumber(double x1) { x = x1; }
	RealNumber operator+(const RealNumber& a)
	{
		return RealNumber(x + a.x);
	}
	RealNumber operator*(const RealNumber& a)
	{
		return RealNumber(x * a.x);
	}
	void print()
	{
		cout << x << endl;
	}
	RealNumber add(const RealNumber& a)
	{
		return RealNumber(x + a.x);
	}
	RealNumber mul(const RealNumber& a)
	{
		return RealNumber(x*a.x);
	}
};
class IntegerNumber:public RealNumber
{
public:
	IntegerNumber() {};
	IntegerNumber(int x2) { x = x2; }
	IntegerNumber(const RealNumber& a) { x = int(a.x); }
};
class ComplexNumber :public Number
{
public:
	complex<double> x;
	ComplexNumber() {}
	ComplexNumber(complex<double> x3) { x = x3; }
	ComplexNumber operator+(const ComplexNumber& a)
	{
		return ComplexNumber(x + a.x);
	}
	ComplexNumber operator*(const ComplexNumber& a)
	{
		return ComplexNumber(x * a.x);
	}
	void print()
	{
		cout << x << endl;
	}
	ComplexNumber add(const ComplexNumber& a)
	{
		return ComplexNumber(x + a.x);
	}
	ComplexNumber mul(const ComplexNumber& a)
	{
		return ComplexNumber(x*a.x);
	}
};
#endif
#pragma once
