#include "Fraction.h"
#include "Except.h"

Fraction::Fraction(int numerator, int denominator)
{
	int gcd = std::gcd(numerator, denominator);
	numerator_ = numerator / gcd;
	denominator_ = denominator / gcd;

	if (denominator_ == 0)
	{
		throw Division_by_zero("Деление на ноль запрещено.");
	}
}

Fraction Fraction::operator+(const Fraction& f)
{
	int numerator = numerator_ * f.denominator_ + f.numerator_ * denominator_;
	int denominator = denominator_ * f.denominator_;
	return Fraction(numerator, denominator);
}

Fraction Fraction::operator-(const Fraction& f)
{
	Fraction tmp = f;
	return *this + (-tmp);
}

Fraction Fraction::operator*(const Fraction& f)
{
	return Fraction(numerator_ * f.numerator_, denominator_ * f.denominator_);
}

Fraction Fraction::operator/(const Fraction& f)
{
	return *this * Fraction(f.denominator_, f.numerator_);
}

Fraction Fraction::operator++()
{
	*this = *this + Fraction(1, 1);
	return *this;
}

Fraction Fraction::operator--()
{
	*this = *this - Fraction(1, 1);
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction tmp = *this;
	++(*this);
	return tmp;
}

Fraction Fraction::operator--(int)
{
	Fraction tmp = *this;
	--(*this);
	return tmp;
}

Fraction Fraction::operator-()
{
	return *this * Fraction(-1, 1);
}

void Fraction::print()
{
	std::cout << numerator_ << "/" << denominator_ << std::endl;
}