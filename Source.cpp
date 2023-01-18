//Jacob Block
//In class exercise 1/18/2023

#include <iostream>
using namespace std;

struct CandyBar {
	char name[12];
	double weight;
	double calories;
};


int main() {
	CandyBar candyBars[3];
	for (int i = 0; i < 3; ++i) {
		cout << "Enter the name of Candy Bar #" << i + 1 << ":";
		cin >> candyBars[i].name;
		cout << "Enter the weight(oz) of Candy Bar #" << i + 1 << ":";
		cin >> candyBars[i].weight;
		if (candyBars[i].weight < 0) {
			break;
			return 5;
		}
		cout << "Enter the calories of Candy Bar #" << i + 1 << ":";
		cin >> candyBars[i].calories;
	}
	for (int i = 0; i < 3; ++i) {
		cout << candyBars[i].name << " " << candyBars[i].weight << "oz " << candyBars[i].calories << " calories" << endl;
	}
	return 0;
}