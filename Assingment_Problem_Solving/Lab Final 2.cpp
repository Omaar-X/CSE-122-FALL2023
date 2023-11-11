#include <iostream>
#include <cassert>
using namespace std;


class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int den) {
        assert(den != 0 && "Denominator cannot be zero");
        assert((typeid(num) == typeid(int)) && (typeid(den) == typeid(int)) && "Numerator and denominator must be of type int");

        numerator = num;
        denominator = den;
        reduce();
    }

    void reduce() {
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    friend ostream& operator<<(ostream& os, const Fraction& frac) {
        return os << frac.numerator << "/" << frac.denominator;
    }

    Fraction operator+(const Fraction& other) const {
        int newNum = numerator * other.denominator + other.numerator * denominator;
        int newDen = denominator * other.denominator;
        Fraction result(newNum, newDen);
        result.reduce();
        return result;
    }
};

int main() {
    Fraction frac1(1, 2);
    Fraction frac2(3, 4);

    cout << "Fraction 1: " << frac1 << "\n";
    cout << "Fraction 2: " << frac2 << "\n";

    Fraction sum = frac1 + frac2;

    cout << "Sum: " << sum << "\n";

    return 0;
}
