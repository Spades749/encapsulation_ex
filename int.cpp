#include "int.h"

Integer::Integer(int _i) : privint(_i)
{
}

Integer::Integer()
{
}

Integer Integer::operator+(const Integer& _op)
{
	Integer tmp(this->privint + _op.privint);
	return tmp;
}

Integer Integer::operator+=(const Integer& _op)
{
	Integer tmp(this->privint += _op.privint);
	return tmp;
}

Integer Integer::operator-(const Integer& _op)
{
	Integer tmp(this->privint - _op.privint);
	return tmp;
}

Integer Integer::operator-=(const Integer& _op)
{
	Integer tmp(this->privint -= _op.privint);
	return tmp;
}

Integer Integer::operator*(const Integer& _op)
{
	Integer tmp(this->privint * _op.privint);
	return tmp;
}

Integer Integer::operator*=(const Integer& _op)
{
	Integer tmp(this->privint *= _op.privint);
	return tmp;
}

Integer Integer::operator/(const Integer& _op)
{
	Integer tmp(this->privint / _op.privint);
	return tmp;
}

Integer Integer::operator/=(const Integer& _op)
{
	Integer tmp(this->privint /= _op.privint);
	return tmp;
}

Integer Integer::operator%(const Integer& _op)
{
	Integer tmp(this->privint % _op.privint);
	return tmp;
}

Integer Integer::operator%=(const Integer& _op)
{
	Integer tmp(this->privint %= _op.privint);
	return tmp;
}

std::ostream& operator<<(std::ostream& os, const Integer& _op)
{
	os << _op.privint;
	return os;
}

int Integer::pow(int)
{
	return 0;
}