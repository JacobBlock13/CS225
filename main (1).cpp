#include "Time.h"

int main() {
    Time day(24,0);
    cout<<"Time in a Day: "<<day<<endl;
    Time sleeping(8,30);
    cout<<"Time sleeping: "<<sleeping<<endl;
    Time leftOver = day - sleeping;
    cout<<"Time left: "<<leftOver<<endl<<endl;
    
    Time studying(1,100);
    cout<<"Time studying: "<<studying<<endl;
    leftOver = leftOver - studying;
    cout<<"Time left: "<<leftOver<<endl<<endl;
    
    Time exercising(1,20);
    cout<<"Time exercising: "<<exercising<<endl;
    leftOver = leftOver - exercising;
    cout<<"Time left: "<<leftOver<<endl;
    return 0;
}