#include <stdio.h>
#include <iostream>
using namespace std;

class Time {
    friend ostream& operator<<(ostream&, Time);
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h, int m);
        Time operator-(Time);
};

Time::Time(){
    hours = 24;
    minutes = 0;
}

Time::Time(int h, int m){
    while (m > 60) {
        m -= 60;
        h++;
    }
    while (m < 0) {
        h--;
        m += 60;
    }
    hours = h;
    minutes = m;
}

ostream& operator<<(ostream& out, Time t) {
    if (t.hours == 1) 
        out<<t.hours<<" Hour "<<t.minutes<<" Minutes";
    else
        out<<t.hours<<" Hours "<<t.minutes<<" Minutes";
    return out;
}

Time Time::operator-(Time t) {
    int newHours;
    int newMinutes;
    newHours = hours - t.hours;
    newMinutes = minutes - t.minutes;
    while (newMinutes < 0) {
        newHours--;
        newMinutes += 60;
    }
    Time newTime(newHours,newMinutes);
    return newTime;
}