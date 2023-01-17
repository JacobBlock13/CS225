//HW2
//Jacob Block

#include <iostream>
using namespace std;

struct Money {
	double dollars;
	double cents;
	
};

void getValues(double field) {
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
}

int main() {
	Money person1;
	Money person2;
	Money sum;
	double person1Total = 0;
	double person2Total = 0;
	double sumTotal = 0;
	cout << "Enter dollars: ";
	cin >> person1.dollars;
	getValues(person1.dollars);
	/*while (!cin) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Error. Try again: ";
		cin >> person1.dollars;
	}
	if (person1.dollars < 0) {
		person1.dollars = 1;
		cout << "Error: negative values are not allowed, setting dollars to 1." << endl;
	}*/
	cout << "Enter cents: ";
	cin >> person1.cents;
	if (person1.cents < 0) {
		person1.cents = 1;
		cout << "Error: negative values are not allowed, setting cents to 1." << endl;
	}
	person1Total = person1.dollars + (person1.cents * .01);
	printf("You entered: $%0.2f\n", person1Total);
	cout << "Enter dollars: ";
	cin >> person2.dollars;
	if (person2.dollars < 0) {
		person2.dollars = 1;
		cout << "Error: negative values are not allowed, setting dollars to 1." << endl;
	}
	cout << "Enter cents: ";
	cin >> person2.cents;
	if (person2.cents < 0) {
		person2.cents = 1;
		cout << "Error: negative values are not allowed, setting cents to 1." << endl;
	}
	person2Total = person2.dollars + (person2.cents * .01);
	printf("You entered: $%0.2f\n", person2Total);
	sum.dollars = person1.dollars + person2.dollars;
	sum.cents = person1.cents + person2.cents;
	sumTotal = sum.dollars + (sum.cents * .01);
	printf("Sum: $%0.2f\n", sumTotal);
}

