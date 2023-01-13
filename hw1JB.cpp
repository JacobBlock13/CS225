// HW1
// Jacob Block

#include <iostream>
using namespace std;
int main()
{
    int age = 0, x = 0, i = 0, calorieSum = 0, calorieValue = 0, randomNumber = 0; //declaring variables 
    cout << "My name is Jacob Block and my major is Aerospace Engineering" << endl; //cout statement to print name and major
    while (x < 1) {
        cout << "How old are you?" << endl;
        cin >> age;
        if (age < 0 || age > 120) {
            cout << "Invalid entry, please enter an age between 0 and 120." << endl;
        }
        else x++;
    } //Asks user to enter their age and does not accept an age less than 0 or greater than 120

    for (i = 2; i <= 40; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    } //A for loop that prints even numbers 2 through 20 on the same line

    cout << endl;
    while (calorieSum < 2000) {
        cout << "Enter calorie value: ";
        cin >> calorieValue;
        calorieSum = calorieSum + calorieValue;
        cout << "Total Calories: " << calorieSum << endl;
    } /*Creates a variable calorieSumand initialize to 0.  Reads in calorie values from the user and adds them to the calorieSum.
    Stops reading in calories when the calorieSum is greater than or equal to 2000. */

    srand(time(0));
    randomNumber = (rand() % 10) + 1; //Generates a random number between 1 and 10
    FILE* fp;
    fopen_s(&fp, "randomNumber.txt", "w");
    fprintf(fp, "The random number was %d", randomNumber); //prints random number to a file called randomNumber.txt
    fclose(fp);
    return 0;
}