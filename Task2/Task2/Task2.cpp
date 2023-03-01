#include "Fraction.h"
#include "Except.h"

int main()
{
	setlocale(LC_ALL, "Russian");

    int numerator1, denominator1;
    int numerator2, denominator2;

    try {
		std::cout << "Введите числитель дроби 1: ";
		std::cin >> numerator1;
		std::cout << "Введите знаменатель дроби 1: ";
		std::cin >> denominator1;
		std::cout << "Введите числитель дроби 2: ";
		std::cin >> numerator2;
		std::cout << "Введите знаменатель дроби 2: ";
		std::cin >> denominator2;

		Fraction f1(numerator1, denominator1);
		Fraction f2(numerator2, denominator2);

		Fraction add = f1 + f2;
		Fraction sub = f1 - f2;
		Fraction multi = f1 * f2;
		Fraction divide = f1 / f2;
		Fraction minusf1 = -f1;
		Fraction minusf2 = -f2;
		Fraction f1_pre = ++f1;
		Fraction f1_post = f1++;
		Fraction f2_pre = ++f2;
		Fraction f2_post = f2++;
		Fraction f1_pre_min = --f1;
		Fraction f1_post_min = f1--;
		Fraction f2_pre_min = --f2;
		Fraction f2_post_min = f2--;

		std::cout << numerator1 << "/" << denominator1 << " + " << numerator2 << "/" << denominator2 << " = ";
		add.print();
		std::cout << numerator1 << "/" << denominator1 << " - " << numerator2 << "/" << denominator2 << " = ";
		sub.print();
		std::cout << numerator1 << "/" << denominator1 << " * " << numerator2 << "/" << denominator2 << " = ";
		multi.print();
		std::cout << numerator1 << "/" << denominator1 << " / " << numerator2 << "/" << denominator2 << " = ";
		divide.print();
		std::cout << numerator1 << "/" << denominator1 << " унарный -" << " = ";
		minusf1.print();
		std::cout << numerator2 << "/" << denominator2 << " унарный -" << " = ";
		minusf2.print();
		std::cout << "Значение дроби 1: ";
		f1_pre.print();
		std::cout << "Значение дроби 2: ";
		f2_pre.print();
    }
	catch (const Division_by_zero& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
