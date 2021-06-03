#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;
void game_module ();
void login ();
int dice ();
void vectortest ();
void hangmangame ();

int main()
{
hangmangame();

    return 0;
}
void hangmangame(){
//setup
const int MAX_WRONG = 8; //maximum number of incorrect guesses allowed
vector<string> words; //collection of possible words to guess
words.push_back("GUESS");
words.push_back("HANGMAN");
words.push_back("DIFFICULT");
srand(static_cast<unsigned int>(time(0)));
random_shuffle(words.begin(), words.end());
const string THE_WORD = words[0]; //word to guess
int wrong = 0; //number of incorrect guesses
string soFar(THE_WORD.size(), '-'); //word guessed so far
string used = ""; //letters already guessed
cout << "Welcome to Hangman. Good luck!\n";
//main loop
while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
{
cout << "\n\nYou have " << (MAX_WRONG - wrong);
cout << " incorrect guesses left.\n";
cout << "\nYou've used the following letters:\n" << used << endl;
cout << "\nSo far, the word is:\n" << soFar << endl;
char guess;
cout << "\n\nEnter your guess: ";
cin >> guess;
guess = toupper(guess); //make uppercase since secret word in uppercase
while (used.find(guess) != string::npos)
{
cout << "\nYou've already guessed " << guess << endl;
cout << "Enter your guess: ";
cin >> guess;
guess = toupper(guess);
}
used += guess;
if (THE_WORD.find(guess) != string::npos)
{
cout << "That's right! " << guess << " is in the word.\n";

//update soFar to include newly guessed letter
for (int i = 0; i < THE_WORD.length(); ++i)
{
if (THE_WORD[i] == guess)
{
soFar[i] = guess;
}
}
}
else
{
cout << "Sorry, " << guess << " isn't in the word.\n";
++wrong;
}
//shut down
if (wrong == MAX_WRONG)
{
cout << "\nYou've been hanged!";
}
else
{
cout << "\nYou guessed it!";
}
cout << "\nThe word was " << THE_WORD << endl;
}
}

void vectortest(){

cout << "Creating a 10 element vector to hold scores.\n";
vector <int> scores(10, 2); //initialize all 10 elements to 0
cout << "Vector size is: " << scores.size() << endl;
cout << "Vector capacity is: " << scores.capacity() << endl;

cout << "Reserving more memory.\n";
scores.reserve(20); //reserve memory for 10 additional elements
cout << "Vector size is :" << scores.size() << endl;
cout << "Vector capacity is:" << scores.capacity() << endl;
}


int dice (){
srand(static_cast<unsigned int>(time(0))); //seed random number generator
int randomNumber = rand(); //generate random number
int die = (randomNumber % 1234) + 1; // get a number between 1 and 6
cout << "You rolled a " << die << endl;
return die;
}

void login (){
string username;
string password;
bool success;
cout << "\tGame Designers Network\n";
do
{
cout << "\nUsername: ";
cin >> username;
cout << "Password: ";
cin >> password;
if (username == "S.Meier" && password == "civilization")
{
cout << "\nHey, Sid.";
success = true;
}
else if (username == "S.Miyamoto" && password == "mariobros")
{
cout << "\nWhat’s up, Shigeru?";
success = true;
}
else if (username == "W.Wright" && password == "thesims")
{
cout << "\nHow goes it, Will?";
success = true;
}
else if (username == "guest" || password == "guest")
{
cout << "\nWelcome, guest.";
success = true;
}
else
{
cout << "\nYour login failed.";
success = false;
}
} while (!success);
}


void game_module (){
char again = 'y';
while (again == 'y')
{int score;
cout << "Difficulty Levels\n\n";
cout << "1 - Easy\n";
cout << "2 - Normal\n";
cout << "3 - Hard\n\n";
int choice;
cout << "Choice: ";
cin >> choice;
switch (choice)
{
case 1:
cout << "You picked Easy.\n";
break;
case 2:
cout << "You picked Normal.\n";
break;
case 3:
cout << "You picked Hard.\n";
break;
default:
cout << "You made an illegal choice.\n";
}
cout << "Enter your score: ";
cin >> score;
if (score >= 1000)
{
cout << "You scored 1000 or more. Impressive!\n";
}
else if (score >= 500)
{
cout << "You scored 500 or more. Nice.\n";
}
else if (score >= 250)
{
cout << "You scored 250 or more. Decent.\n";
}
else
{
cout << "You scored less than 250. Nothing to brag about.\n";
}
cout << "Roll the dice...\n";
cin >> score;
dice ();

const int GOLD_PIECES = dice();
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
cout << "All fought bravely under the command of " << leader<< "\n";
cout << ", and the ogres were defeated, but at a cost. \n";
cout << "Of the adventurers, " << killed << " were vanquished, ";
cout << "leaving just " << survivors << " in the group.\n";
cout << "\nThe party was about to give up all hope. ";
cout << "But while laying the deceased to rest, ";
cout << "they stumbled upon the buried fortune. \n";
cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
cout << " pieces to keep things fair of course.\n";

cout << "\n**Played Lost Fortune game**";
cout << "\nDo you want to play again? (y/n): ";
cin >> again;

}
cout << "\nOkay, bye.";
}
