#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char nation[20];
    long double grains = 1;
    int board, badboard;
    bool boardflag = false;
    long double sum = 1;
    long double budget, cost;
    char quit;
    cout <<"WELCOME TO THE GREEDY INVENTOR ANALYSIS CHAMBER."<<endl;
    cout <<"\nEnter all the necessary data to find out a countries breaking point."<<endl;
    cout <<"\nEnter the name of the nation: ";
    cin >> nation;
    cout << "\nEnter the nation's budget(in US dollars): $";
    cin >> budget;
    cout << "\nEnter the cost per 50kg bag of rice (in US dollars): $";
    cin >> cost;

    cout << setprecision(2) << setiosflags(ios::fixed);


    cout << "\nTile No: 1 || Grains: 1            || Sum: 1" << endl;
    cout <<"----------------------------------------------------------------------------------------------------- "<< endl;

    for (board = 2; board <65; ++board ){
        grains = grains * 2;
        sum += grains;
        double bags = (sum/2314851);
        long double price = bags * cost;
        long double balance = budget - price;
        if ( balance < (budget*0.75) && boardflag == false){
            badboard = board;
            boardflag = true;
        }
        cout << setprecision(2) << setiosflags(ios::fixed);

        cout << "\nTile No: " << setw(2) <<board<< setw(8) <<" || Grains: "<< setw(8) <<grains<<setw(8) <<" || Sum: " << setw(8) <<sum<< endl;
        cout << "\nPrice $" << setw(2) <<price<<setw(8) <<" || Balance $" << setw(8) <<balance<<setw(8) <<" || No of 50kg Bags: "<< setw(8) <<bags<<endl;;
        cout <<"-------------------------------------------------------------------------------------------------- "<< endl;
    }

    cout << setprecision(2) << setiosflags(ios::fixed);

    cout << "\n\nTotal amount of rice grains the king of "<<nation<<" needs to pay is " <<sum<< endl;
    cout <<"------------------------------------------------------------------------------- "<< endl;
    cout << "\n\nThis is equivalent to " <<sum/2314851<<" 50kg bags of rice"<< endl;
    cout <<"------------------------------------------------------------------------------- "<< endl;
    cout << "\n\nThis is equivalent to " <<sum/4629702<<" 100kg bags of rice"<< endl;
    cout <<"------------------------------------------------------------------------------- "<< endl;
    cout << "\n\nThis is equivalent to " <<(sum/2314851)*18000<<" naira worth of rice"<< endl;
    cout <<"------------------------------------------------------------------------------- "<< endl;
    cout << "\n\nThis is equivalent to " <<(sum/2314851)*40.14<<" pounds sterling worth of rice"<< endl;
    cout <<"------------------------------------------------------------------------------- "<< endl;
    cout << "\n\nThis is equivalent to $" <<(sum/2314851)*cost<<" (dollars) worth of rice"<< endl;
    cout <<"------------------------------------------------------------------------------- "<< endl;

    double bags = (sum/2314851);
    long double price = bags * cost;
    long double balance = budget - price;

    if (balance < 1){
        cout << "\n\n\nAt board number " <<badboard<<", this stopped being a good deal for the king of "<<nation<< endl;
        cout << "\nThe national balance is $" <<balance<<""<< endl;
    }
    else {
        cout << "\n\n\nImpressive, "<<nation<<"'s economy survived the ransom of the inventor."<< endl;
        cout << "\nThe national balance is $" <<balance<<""<< endl;
    }
    cin>>quit;


    return 0;
}
