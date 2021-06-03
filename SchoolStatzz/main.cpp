#include <iostream>

using namespace std;
double score, grade_point, grade_point_average;
double A, AB, B, BC, C, CD, D, E, F;
int credit_unit;
int status = 1;
double grade_calculator();
double showz;

int main()
{

    A = 4.00;
    AB = 3.50;
    B = 3.25;
    BC = 3.00;
    C = 2.75;
    CD = 2.50;
    D = 2.25;
    E = 2;
    F = 0;
while (status == 1){
    cout << "what your score? " << endl;
    cin >> score;
    cout << "what your credit unit? " << endl;
    cin >> credit_unit;

    showz = grade_calculator();
    cout << showz <<endl;
    cout << "wanna continue? \n0 - NO. \n1 - YES. "<< endl;
    cin >> status;

if (status == 0){
    break;
}
    }

    return 0;
}

double grade_calculator(){
    double rezult;

    if (score > 75){
            rezult = A*credit_unit;
    }

    if (score < 74.99){
            if (score >= 70){
                    rezult = AB*credit_unit;
    }
    }

    if (score < 69.99) {
            if (score >= 65){
                    rezult = B*credit_unit;
    }
    }


    if (score < 64.99){
            if (score >= 60){
                    rezult = BC*credit_unit ;
    }
    }

    if (score < 59.99){
            if (score >= 55){
                    rezult = C*credit_unit;
    }
    }

    if (score < 54.99){
            if (score >= 50){
                     rezult = CD*credit_unit;
    }
    }

    if (score < 49.99){
            if (score >= 45){
                    rezult = D*credit_unit;

    }
    }

    if (score < 44.99){
            if (score >= 40){
                    rezult = E*credit_unit;

    }
    }

    if (score < 39.99){
            if (score >= 0){
                    rezult = F*credit_unit;

    }
    }
return rezult;
}
