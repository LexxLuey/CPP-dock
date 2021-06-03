
// Pointing
// Demonstrates using pointers
//#include <iostream>
#include <string>
//using namespace std;
//int main(){
    // Swap Pointer
// Demonstrates passing constant pointers to alter argument variables
#include <iostream>
using namespace std;
void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);
int main()
{

int myScore = 150;
int yourScore = 1000;
cout << "Original values\n";
cout << "myScore: " << myScore << "\n";
cout << "yourScore: " << yourScore << "\n\n";
cout << "Calling badSwap()\n";
badSwap(myScore, yourScore);
cout << "myScore: " << myScore << "\n";
cout << "yourScore: " << yourScore << "\n\n";
cout << "Calling goodSwap()\n";
goodSwap(&myScore, &yourScore);
cout << "myScore: " << myScore << "\n";
cout << "yourScore: " << yourScore << "\n";
return 0;
}
void badSwap(int x, int y)
{
int temp = x;
x = y;
y = temp;
}
void goodSwap(int* const pX, int* const pY)
{
//store value pointed to by pX in temp
int temp = *pX;
//store value pointed to by pY in address pointed to by pX
*pX = *pY;
//store value originally pointed to by pX in address pointed to by pY
*pY = temp;
}

/*
    int* pAPointer; //declare a pointer
    int* pScore = 0; //declare and initialize a pointer
    int score = 1000;
    pScore = &score; //assign pointer pScore address of variable score
    cout << "Assigning &score to pScore\n";
    cout << "&score is: " << &score << "\n"; //address of score variable
    cout << "pScore is: " << pScore << "\n"; //address stored in pointer
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n"; //value pointed to by pointer
    cout << "Adding 500 to score\n";
    score += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";
    cout << "Adding 500 to *pScore\n";
    *pScore += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";
    cout << "Assigning &newScore to pScore\n";
    int newScore = 5000;
    pScore = &newScore;
    cout << "&newScore is: " << &newScore << "\n";
    cout << "pScore is: " << pScore << "\n";
    cout << "newScore is: " << newScore << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";
    cout << "Assigning &str to pStr\n";
    string str = "score";
    string* pStr = &str; //pointer to string object
    cout << "str is: " << str << "\n";
    cout << "*pStr is: " << *pStr << "\n";
    cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
    cout << "pStr->size() is: " << pStr->size() << "\n";
    */
