#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}

bool Fraction::operator==(const Fraction& f) const
{
	return numerator_ * f.denominator_ == f.numerator_ * denominator_;
}

bool Fraction::operator!=(const Fraction& f) const
{
	return !(*this == f);
}

bool Fraction::operator<(const Fraction& f) const
{
	return numerator_ * f.denominator_ < f.numerator_ * denominator_;
}

bool Fraction::operator>(const Fraction& f) const
{
	return f < *this;
}

bool Fraction::operator<=(const Fraction& f) const
{
	return !(*this > f);
}
bool Fraction::operator>=(const Fraction& f) const
{
	return !(*this < f);
}