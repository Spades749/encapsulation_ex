#pragma once
#include <string>
#include <iostream>
#include <cmath>

class Integer {
private :
	int privint;
public :
	Integer(int _i);
	Integer() : privint(0) {}

	Integer operator+(const Integer& _op);
	Integer operator+=(const Integer& _op);
	Integer operator-(const Integer& _op);
	Integer operator-=(const Integer& _op);
	Integer operator*(const Integer& _op);
	Integer operator*=(const Integer& _op);
	Integer operator/(const Integer& _op);
	Integer operator/=(const Integer& _op);
	Integer operator%(const Integer& _op);
	Integer operator%=(const Integer& _op);
	friend std::ostream& operator<<(std::ostream& os, const Integer& _op);

	int pow(int);
};