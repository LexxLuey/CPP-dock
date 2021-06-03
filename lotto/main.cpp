#include <iostream>
#include <iomanip> //for formatting of output
#include <stdlib.h> //for random generator
#include <time.h> //for system clock
using namespace std;
int main()
{
    //Declarations
    int num1, num2, num3, num4, num5, num6, num7;
    double dAverage;
    const int iNo = 7;
    //Initiate random number generator
    srand(time(0));
    //Generate 7 lotto numbers
    num1 = rand()%35+1;
    num2 = rand()%35+1;
    num3 = rand()%35+1;
    num4 = rand()%35+1;
    num5 = rand()%35+1;
    num6 = rand()%35+1;
    num7 = rand()%35+1;

    //Calculate average
    dAverage = (double)( num1 + num2 + num3 + num4 + num5 + num6 + num7) / iNo;
    //Output
    cout << "=========================="<<endl;
    cout << "Welcome To UltraWin Lotto."<<endl;
    cout << "=========================="<<endl;

    cout << "Guess the 7 numbers and win N150,000!"<<endl;
    cout << "Guess the 6 numbers and win N60,000!"<<endl;
    cout << "Guess the 5 numbers and win N25,000!"<<endl;
    cout << "Guess the 4 numbers and win N10,000!"<<endl;
    cout << "Guess the 3 numbers and win N4,500!"<<endl;
    cout << "Guess the 2 numbers and win N2,000!"<<endl;
    cout << "Guess the 1 numbers and win N1,000!"<<endl;
    cout << "==================================="<<endl;
    cout << "==================================="<<endl;

    cout << "Enter your lucky numbers (1-35): "<<endl;
    int mynum1, mynum2, mynum3;
    cin >> mynum1 >> mynum2 >> mynum3;



    cout << "===================================="<<endl;
    cout << setprecision(1) << setiosflags(ios::fixed);
    cout << "Lotto Number One:   " << setw(8) << num1 << endl;
    cout << "Lotto Number Two:   " << setw(8) << num2 << endl;
    cout << "Lotto Number Three: " << setw(8) << num3 << endl;
    cout << "Lotto Number Four:  " << setw(8) << num4 << endl;
    cout << "Lotto Number Five:  " << setw(8) << num5 << endl;
    cout << "Lotto Number Six:   " << setw(8) << num6 << endl;
    cout << "Lotto Number Seven: " << setw(8) << num7 << endl;
    cout << "Average of Lotto Round: " << dAverage<<endl;;
    cout << "======================================"<<endl;

    if ( mynum1 == num1 || mynum1 == num2 || mynum1 == num3 || mynum1 == num4 || mynum1 == num5 || mynum1 == num6 || mynum1 == num7){
        if ( mynum2 == num1 || mynum2 == num2 || mynum2 == num3 || mynum2 == num4 || mynum2 == num5 || mynum2 == num6 || mynum2 == num7){
            if ( mynum3 == num1 || mynum3 == num2 || mynum3 == num3 || mynum3 == num4 || mynum3 == num5 || mynum3 == num6 || mynum3 == num7){
                cout << "WOW!!! You got 3 numbers!!! " << mynum1 <<" "<<mynum2 <<" "<<mynum3 <<endl;
            }
            else{
                cout << "NICE! You got 2 numbers! " << mynum1 <<" "<<mynum2 <<endl;
            }
        }
         else if ( mynum3 == num1 || mynum3 == num2 || mynum3 == num3 || mynum3 == num4 || mynum3 == num5 || mynum3 == num6 || mynum3 == num7){
            cout << "NICE! You got 2 numbers! " << mynum1 <<" "<<mynum3 <<endl;
         }
         else {
            ;
         }
         cout << " You got a number! " <<endl;


        }



       if (mynum1 == num1 || mynum1 == num2 || mynum1 == num3 || mynum1 == num4 || mynum1 == num5 || mynum1 == num6 || mynum1 == num7){
            cout << "You got number " << mynum1 <<". "<<endl;
       }
       if (mynum2 == num1 || mynum2 == num2 || mynum2 == num3 || mynum2 == num4 || mynum2 == num5 || mynum2 == num6 || mynum2 == num7){
            cout << "You got number " << mynum2 <<". "<<endl;
       }
       if (mynum3 == num1 || mynum3 == num2 || mynum3 == num3 || mynum3 == num4 || mynum3 == num5 || mynum3 == num6 || mynum3 == num7){
            cout << "You got number " << mynum3 <<". "<<endl;
       }


}
