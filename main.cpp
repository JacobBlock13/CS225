//HW4
//Jacob Block

#include <iostream>
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
        cout<<endl<<"Make: "<<make<<endl<<"Miles Per Gallon: "<<milesPerGallon<<endl<<"Fuel in Tank: "<<fuelInTank<<endl<<"Fuel Tank Capacity: "<<fuelTankCapacity<<endl<<"Odometer reading: "<<odometer<<endl;
    }
    
    void fuelUp()
    {
        fuelInTank = fuelTankCapacity;
    }
};

int main()
{
    Car accord;
    accord.setCar("Honda", 20, 13.5, 20, 100004);
    accord.showCar();
    accord.fuelUp();
    accord.showCar();
    
}