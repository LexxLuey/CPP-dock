#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using namespace std;

int main()
{
    int score;
double distance;
char playAgain;
bool shieldsUp;
short lives, aliensKilled;
score = 0;
distance = 1200.76;


lives = 3;
aliensKilled = 10;
double engineTemp = 6572.89;
cout << "\nscore: " << score << endl;
cout << "distance: " << distance << endl;
cout << "playAgain: " << playAgain << endl;
//skipping shieldsUp since you don’t generally print Boolean values
cout << "lives: " << lives << endl;
cout << "aliensKilled: "<< aliensKilled << endl;
cout << "engineTemp: " << engineTemp << endl;
int fuel;
cout << "\nHow much fuel? ";
cin >> fuel;
cout << "fuel: " << fuel << endl;
if (fuel < 50){
    shieldsUp = true;
} else {
shieldsUp = false;
}
if (shieldsUp == true){
        cout << "shield activated. " << endl;
}
else {
        cout << "shield deactivated. " << endl;
}
typedef unsigned short int ushort;
ushort bonus = 10;
cout << "\nbonus: " << bonus << endl;
const int GOLD_PIECES = 7777;
int adventurers, killed, survivors;
string leader;
//get the information
cout << "Welcome to Lost Fortune\n\n";
cout << "Please enter the following for your personalized adventure\n";
cout << "Enter a number: ";
cin >> adventurers;
cout << "Enter a number, smaller than the first: ";
cin >> killed;
survivors = adventurers - killed;
cout << "Enter your last name: ";
cin >> leader;
//tell the story
cout << "\nA brave group of " << adventurers << " set out on a quest ";
cout << "- in search of the lost treasure of the Ancient Dwarves. \n";
cout << "The group was led by that legendary rogue, " << leader << ".\n";
cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
cout << "All fought bravely under the command of " << leader;
cout << ", and the ogres were defeated, but at a cost. \n";
cout << "Of the adventurers, " << killed << " were vanquished, ";
cout << "leaving just " << survivors << " in the group.\n";
cout << "\nThe party was about to give up all hope. ";
cout << "But while laying the deceased to rest, ";
cout << "they stumbled upon the buried fortune. \n";
cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
cout << " pieces to keep things fair of course.\n";

    return 0;
}
