// Lost Fortune
// A personalized adventure
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<process.h>
#include<windows.h>

using namespace std;

int main()
{
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;
    //get the information
	cout<<"\n\n\t\t\t\t======================\n";
	cout<<"\t\t\t\tWelcome to Lost Fortune";
	cout<<"\n\t\t\t\t======================\n";
    cout << "\n\t\t\t\tPlease enter the following for your personalized adventure\n";
    cout << "\n\t\t\t\tEnter a number: ";
    cin >> adventurers;
    cout << "\n\t\t\t\tEnter a number, smaller than the first: ";
    cin >> killed;
    survivors = adventurers - killed;
    cout << "\n\t\t\t\tEnter your last name: ";
    cin >> leader;
    system("cls");
    //tell the story

    cout << "\nA brave group of " << adventurers << " set out on a quest ";
    cout << "-- in search of the lost treasure of the Ancient King Luey Lu. ";
    Sleep(500);
    cout << "The group was led by that legendary rogue, " << leader << ".\n";
    cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
    cout << "All fought bravely under the command of " << leader;
    cout << ", and the ogres were defeated, but at a cost. ";
    cout << "Of the adventurers, " << killed << " were vanquished, ";
    cout << "leaving just " << survivors << " in the group.\n";
    cout << "\nThe party was about to give up all hope. ";
    cout << "But while laying the deceased to rest, ";
    cout << "they stumbled upon the buried fortune. ";
    cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
    cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
    cout << " pieces to keep things fair of course.\n";
    return 0;
}
