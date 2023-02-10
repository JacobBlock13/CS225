//Jacob Block
//HW5

#include <iostream>
using namespace std;

class Fraction {
private:
    int wholeNumber;
    int numerator;
    int denominator;
public:
    Fraction() {
        cout << "Enter three integers for whole number, numerator, and denominator respectively." << endl;
        cin >> wholeNumber >> numerator >> denominator;
        while (!cin) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Error. Try again: ";
            cin >> wholeNumber >> numerator >> denominator;
        }
    }
    Fraction(int n, int d, int wn = 0) {
        numerator = n;
        denominator = d;
        wholeNumber = wn;
    }
    int getWholeNumber() const {
        return wholeNumber;
    }
    int getNumerator()const {
        return numerator;
    }

    int getDenominator() const {
        return denominator;
    }
};

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

void display(const Fraction& f) {
    if (f.getDenominator() == 0) {
        cout << "Error: Division by 0." << endl;
    }
    else if (f.getWholeNumber() == 0 && f.getNumerator() == 0) {
        cout << "0" << endl;
    }
    else if (f.getWholeNumber() == 0) {
        cout << f.getNumerator() << "/" << f.getDenominator() << endl;
    }
    else if (f.getNumerator() == 0) {
        cout << f.getWholeNumber()<<endl;
    }
    else {
        cout << f.getWholeNumber() << " " << f.getNumerator() << "/" << f.getDenominator() << endl;
    }
}

Fraction reduce(const Fraction& f) {
    int wn = 0;
    int n = 0;
    int d = 0;
    int greatestCommonFactor;
    if (f.getNumerator() > f.getDenominator()) {
        wn = f.getWholeNumber() + (f.getNumerator() / f.getDenominator());
        n = f.getNumerator() % f.getDenominator();
        d = f.getDenominator();
        greatestCommonFactor = gcd(d, n);
        n /= greatestCommonFactor;
        d /= greatestCommonFactor;
    }
    else {
        wn = f.getWholeNumber();
        n = f.getNumerator();
        d = f.getDenominator();
        greatestCommonFactor = gcd(d, n);
        n /= greatestCommonFactor;
        d /= greatestCommonFactor;
    }
    return Fraction(n, d, wn);
}

Fraction multiply(const Fraction& fraction1, const Fraction& fraction2) {
    if (fraction1.getDenominator() == 0 || fraction2.getDenominator() == 0) {
        cout << "Error: Cannot divide by 0."<<endl;
        return Fraction(0, 0, 0);
    }
    else {
        int n = ((fraction1.getWholeNumber() * fraction1.getDenominator()) + fraction1.getNumerator()) * ((fraction2.getWholeNumber() * fraction2.getDenominator()) + fraction2.getNumerator());
        int d = fraction1.getDenominator() * fraction2.getDenominator();
        Fraction f = Fraction(n, d, 0);
        return reduce(f);
    }
}

int main()
{
    Fraction one;
    Fraction two;
    Fraction three = multiply(one, two);
    cout << "Fracion 1: ";
    display(one);
    cout << "Fraction 2: ";
    display(two);
    cout << "Fraction 1 and 2 multiplied together: ";
    display(three);
}