// HW1
// Jacob Block

#include <iostream>
using namespace std;
int main()
{
    int age = 0, x = 0, i = 0, calorieSum = 0, calorieValue = 0, randomNumber = 0;
    cout << "My name is Jacob Block and my major is Aerospace Engineering" << endl;
    while (x < 1) {
        cout << "How old are you?" << endl;
        cin >> age;
        if (age < 0 || age > 120) {
            cout << "Invalid entry, please enter an age between 0 and 120." << endl;
        }
        else x++;
    }
    for (i = 1; i <= 40; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    while (calorieSum < 2000) {
        cout << "Enter calorie value: ";
        cin >> calorieValue;
        calorieSum = calorieSum + calorieValue;
        cout << "Total Calories: " << calorieSum << endl;
    }
    srand(time(0));
    randomNumber = (rand() % 10) + 1;
    cout << randomNumber;
    FILE* fp;
    fopen_s(&fp, "randomNumber.txt", "w");
    fprintf(fp, "The random number was %d", randomNumber);
    fclose(fp);
    return 0;
}