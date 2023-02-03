//HW4
//Jacob Block

#include <iostream>
#include <ctime>
#include <limits.h>
//#include <unistd.h>
using namespace std;

class Car {
private:
    string make;
    double milesPerGallon;
    double fuelInTank;
    double fuelTankCapacity;
    double odometer;
public:
    void setCar(string m, double mpg, double fit, double ftc, double o)
    {
        make = m;
        milesPerGallon = mpg;
        fuelInTank = fit;
        fuelTankCapacity = ftc;
        odometer = o;
    }
    
    void showCar()
    {
        cout<<endl<<"******************************"<<endl<<"Make: "<<make<<endl<<"Miles Per Gallon: "<<milesPerGallon<<endl<<"Fuel in Tank: "<<fuelInTank<<endl<<"Fuel Tank Capacity: "<<fuelTankCapacity<<endl<<"Odometer reading: "<<odometer<<endl<<"******************************"<<endl;
    }
    
    void fuelUp(int fuel)
    {
        if ((fuel + fuelInTank) > fuelTankCapacity) {
            cout<<"Error: overfueled. Fueled to max capacity instead.";
            fuelInTank = fuelTankCapacity;
        }
        else if (fuel < 0) {
            cout<<"Error: cannot take fuel out of the car.";
        }
        else fuelInTank += fuel;
    }
    
    void drive()
    {
        srand(time(0));
        int randomNumber = rand() % 101;
        if((milesPerGallon*fuelInTank) < randomNumber) {
            cout<<"Ran out of gas after "<<milesPerGallon*fuelInTank<<" miles."<<endl;
            odometer += milesPerGallon*fuelInTank;
            fuelInTank = 0;
        }
        else {
        fuelInTank = fuelInTank - (randomNumber/milesPerGallon);
        odometer += randomNumber;
        }
    }
    
    void drive(int distance)
    {
        if(distance < 0) {
            cout<<"Cannot drive a negative distance sorry.";
        }
        else if((milesPerGallon*fuelInTank) < distance) {
            cout<<"Ran out of gas after "<<milesPerGallon*fuelInTank<<" miles."<<endl;
            odometer += milesPerGallon*fuelInTank;
            fuelInTank = 0;
        }
        else {
        odometer += distance;
        fuelInTank = fuelInTank - (distance/milesPerGallon);
        }
    }
};

int main()
{
    Car accord;
    accord.setCar("Honda", 20, 13.5, 20, 100004);
    int userInput = 0;
    int distance = 0;
    int fuel = 0;
    accord.showCar();
    do{
        cout<<"Select \n1) Go on a joy ride \n2) Drive a certain distance \n3) Fuel up \n4) Exit"<<endl;
        cin>>userInput;
        while (!cin) {
		    cin.clear();
		    cin.ignore(INT_MAX, '\n');
		    cout << "Error. Try again: ";
		    cin >> userInput;
        }
        switch(userInput) {
            case 1:
                accord.drive();
                accord.showCar();
                break;
            case 2:
                cout<<"How far would you like to drive?"<<endl;
                distance = 0;
                cin>>distance;
                while (!cin) {
		            cin.clear();
		            cin.ignore(INT_MAX, '\n');
		            cout << "Error. Try again: ";
		            cin >> distance;
                }
                accord.drive(distance);
                accord.showCar();
                break;
            case 3: 
                cout<<"How much fuel would you like to add?"<<endl;
                fuel = 0;
                cin>>fuel;
                while (!cin) {
		            cin.clear();
		            cin.ignore(INT_MAX, '\n');
		            cout << "Error. Try again: ";
		            cin >> fuel;
	            }
                accord.fuelUp(fuel);
                accord.showCar();
                break;
            case 4:
                return 1;
            default:
                cout<<"Error try again."<<endl;
        }
    }
    while(userInput != 4);
}
