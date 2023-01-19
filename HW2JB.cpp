//HW2
//Jacob Block

#include <iostream>
using namespace std;

struct Money {
	double dollars;
	double cents;

};

double getValues(double field) {
	cin >> field;
	while (!cin) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Error. Try again: ";
		cin >> field;
	}
	if (field < 0) {
		field = 1;
		cout << "Error: negative values are not allowed, setting field to 1." << endl;
	}
	return field;
}

int main() {
	Money person1 = { 0, 0 };
	Money person2 = { 0, 0 };
	Money sum;
	double person1Total = 0;
	double person2Total = 0;
	double sumTotal = 0;
	cout << "Enter dollars: ";
	person1.dollars = getValues(person1.dollars);
	cout << "Enter cents: ";
	person1.cents = getValues(person1.cents);
	person1Total = person1.dollars + (person1.cents * .01);
	printf("You entered: $%0.2f\n", person1Total);
	cout << "Enter dollars: ";
	person2.dollars = getValues(person2.dollars);
	cout << "Enter cents: ";
	person2.cents = getValues(person2.cents);
	person2Total = person2.dollars + (person2.cents * .01);
	printf("You entered: $%0.2f\n", person2Total);
	sum.dollars = person1.dollars + person2.dollars;
	sum.cents = person1.cents + person2.cents;
	sumTotal = sum.dollars + (sum.cents * .01);
	printf("Sum: $%0.2f\n", sumTotal);
}

