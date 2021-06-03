#include <iostream>
#include <iomanip> //for formatting of output
#include <stdlib.h> //for random generator
#include <time.h> //for system clock
using namespace std;

int numwinAmt = 0;
int playagain = 1;
int moneygot = 1000;

int main()
{

    srand(time(0));
    int numlucky[8]; //7 lotto numbers
    int a = 8; //amount of numbers to play
    int numuser[8]; //user enters numbers
    int numwin [8]; // array to store winning numbers
    int prizemoney [8] = {0, 1000, 2000, 4500, 10000, 25000, 60000, 150000}; //array storing prize for amount of matches

    do{
            for (int i = 1; i <= 7; i++){
        //Generate 7 lotto numbers
        numlucky [i] = rand()%35+1;
    }

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

    cout << "How many lucky numbers do you want to predict?(1-7): "<<endl;

    cin >> a;
    while( a<1 || a>7){
        cout << "Wrong choice. You can only choose from 1 - 7 numbers. \nHow many lucky numbers do you want to predict?(1-7): "<<endl;
        cin >> a;
    }
    if (a == 1){
        moneygot = moneygot - 100;
    }
    else if (a == 2){
        moneygot = moneygot - 200;
    }
    else if (a == 3){
        moneygot = moneygot - 300;
    }
    else if (a == 4){
        moneygot = moneygot - 400;
    }
    else if (a == 5){
        moneygot = moneygot - 500;
    }
    else if (a == 6){
        moneygot = moneygot - 600;
    }
    else {
        moneygot = moneygot - 700;
    }

    system("cls");

    //int b = a + 1;
    //int numuser[b];
    cout << "Enter your lucky numbers (1-35): "<<endl;

    for (int i = 1; i <= a; i++){
        cout << "Enter lucky number " << i << ": ";
        cin >> numuser[i];
    }


    cout << "===================================="<<endl;
    for (int i=1; i <= 7; i++){
        cout << "Lotto "<<i<< ":   " << numlucky[i] << endl;
    }



    for (int i=1; i <= 7; i++){
        for (int j=1; j<=a; j++){
            if (numuser[j] == numlucky[i]){
                numwinAmt++ ;
            }
        }
    }
    //int extra = numwinAmt+1;

    //int numwin[extra];
    int k = 0;

    for (int i=1; i <= 7; i++){
        for (int j=1; j<=a; j++){
            if (numuser[j] == numlucky[i]){
                k++;

                numwin [k] = numuser[j];
            }
        }
    }

    cout << "===================================="<<endl;

    if (numwinAmt >= 1){
        if (numwinAmt == 1){
        cout << "Nice. You got one lucky number. N1000."<<endl;
        }
        if (numwinAmt == 2){
            cout << "Excellent! you got two winning numbers. N2000. " << endl;
        }
        if (numwinAmt == 3){
            cout << "Impressive! you got three winning numbers. N4500." << endl;
        }
        if (numwinAmt == 4){
            cout << "Beautiful! you got four winning numbers. N10000." << endl;
        }
        if (numwinAmt == 5){
            cout << "Fabulous! you got five winning numbers. N25000." << endl;
        }
        if (numwinAmt == 6){
            cout << "Wonderful! you got six winning numbers. N60000." << endl;
        }
        if (numwinAmt == 7){
            cout << "Spectacular!!! you got seven winning numbers. N150000." << endl;
        }
        cout << "WINNING NUMBERS"<<endl;
        cout << "==============="<<endl;
        for (int i=1; i<=numwinAmt; i++){
            if (i != numwinAmt ){
                cout <<numwin[i] <<", ";
            }
            else{
                cout <<numwin[i] <<". ";
            }


        }
        cout << "\n";

        cout << "=========================="<<endl;
        cout << "You won: N"<< prizemoney[numwinAmt]<<endl;
        moneygot = moneygot + prizemoney[numwinAmt];
    }
    else{
        cout << "Sorry. You have no matching number. Try again next time."<<endl;
    }

    cout << "Your current balance is: N"<<moneygot<<endl;
    cout << "\n";
    cout << "Do you want to play again? \n1.Yes, I do. \n2.No, I don't. \n";
    cin >> playagain;
    system("cls");


    }while(playagain != 2 || moneygot == 0);

}//end int main
