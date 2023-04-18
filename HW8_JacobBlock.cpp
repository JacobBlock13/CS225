//Jacob Block
//HW8
#include "HW8.h"
using namespace std;

template<class T>
float average(T x, T y) {
    float average;
    average = (float(x + y))/2.0;
    return average;
}

int main(){ 
    cout<<average(2,4)<<endl;
    cout<<average(2.5,4.5)<<endl;
    FinalExam cs118("CS118", 2);
    FinalExam cs225("CS225", 5);
    cout<<average(cs118,cs225)<<endl;
    return 0;
}
