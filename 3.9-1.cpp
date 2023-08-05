// 3.9-1.cpp 
//

#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	double quotient() { return static_cast<double>(numerator_) / denominator_; }//частное
	bool operator==(Fraction a) { return quotient() == a.quotient(); }
	bool operator!=(Fraction a) { return !(*this == a); }//используем предыдущий уже определенный оператор ==
	bool operator<(Fraction a) { return quotient() < a.quotient(); }
	bool operator>=(Fraction a) { return !(*this < a); }
	bool operator>(Fraction a) { return a < *this; }
	bool operator<=(Fraction a) { return !(a < *this); }
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;

    //std::cout << "Hello World!\n";
}
