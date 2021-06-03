#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    int iOption;
    double dDistance, dSpeed, dTime;

    cout << "TRAVEL GUIDE 1.0" << endl;
    cout << "The ultimate data guide for your journeys.\n\n\n" << endl;

    cout << "What do you want to find out?\n" << endl;
    cout << "1. Total time your trip will take. \n2. Speed required for your trip. \n3. Distance you will travel for your trip." << endl;
    cin >> iOption;

    system("cls");
    switch (iOption)
    {
        case 1:
            /*prompts the user for the distance between two cities and in what speed you intend to
            drive. The program should print the time for the trip.*/
            cout << "What is the distance you are going to travel (km)?: " << endl;
            cin >> dDistance;
            cout << "What is the speed you are going to travel (km/h)?: " << endl;
            cin >> dSpeed;
            cout << "Your journey will take: "<< (dDistance/dSpeed) <<" hours approximately." << endl;
            break;

        case 2:
            /*prompts for the time allocated for the trip. The
            program should respond with the speed required for the trip.*/
            cout << "What is the distance you are going to travel (km)?: " << endl;
            cin >> dDistance;
            cout << "What is the amount of time you wish spend traveling (hr)?: " << endl;
            cin >> dTime;
            cout << "You will need to drive at the rate of: "<< (dDistance/dTime) <<"km/h approximately." << endl;
            break;

        case 3:
            /*program so that you can enter the speed and the time for the trip. The program should
            then respond with the driving distance */
            cout << "What is the speed you are going to be traveling at (km/h)?: " << endl;
            cin >> dSpeed;
            cout << "What is the amount of time you wish spend traveling (hr)?: " << endl;
            cin >> dTime;
            cout << "It seems you are going on a trip of about "<< dSpeed*dTime <<" km approximately. safe trip." << endl;

            break;

        default:
            cout << "Wrong choice";
            break;
    }
    return 0;
}
