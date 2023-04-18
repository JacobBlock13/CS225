//Jacob Block
//HW8
#include <iostream>
#include <string>
using namespace std;

class FinalExam {
    private:
        string courseName;
        int difficulty;
    public:
        FinalExam();
        FinalExam(string cN, int d);
        float operator+(FinalExam a);
};

float FinalExam::operator+(FinalExam a) {
    float sum = difficulty + a.difficulty;
    return sum;
}

FinalExam::FinalExam(string cN, int d) {
    courseName = cN;
    difficulty = d;
}

FinalExam::FinalExam() {
    courseName = ' ';
    difficulty = 0;
}