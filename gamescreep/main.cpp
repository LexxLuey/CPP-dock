// Word Jumble
// The classic word jumble game where the player can ask for a hint
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
void guessgame();

int main()
{
    int points = 100;
    int count = 4;
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 10;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
    {
        {"wall", "Do you feel you're banging your head against something?"},
        {"glasses", "These might help you see the answer."},
        {"labored", "Going slowly, is it?"},
        {"persistent", "Keep at it."},
        {"jumble", "It's what the game is all about."},
        {"charter", "A document incorporating an institution and specifying its rights"},
        {"football", "A game played with a ball in which two teams try to score goals by kicking the ball"},
        {"shrewd", "Marked by practical hardheaded intelligence"},
        {"circumspect", "Heedful of potential consequences"},
        {"biology", "The science that studies living organisms"}
        };

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD]; // word to guess
    string theHint = WORDS[choice][HINT]; // hint for word
    string jumble = theWord; // jumbled version of word

    int length = jumble.size();

    for (int i = 0; i < length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "Enter 'quit' to quit the game.\n\n";
    cout << "The jumble is: " << jumble;
    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;

    while ((guess != theWord) && (guess != "quit") && (count != 0))
    {
        if (guess == "hint")
        {
            points -= 10;
            cout << theHint;
        }
        else
        {
            cout << "Sorry, that's not it.";
            count -= 1;
            points -= 5;
        }

        cout <<"\n\nYou have " << count << " chances left amigo. ";
        cout <<"\n\nYour guess: ";
        cin >> guess;
    }

    if (guess == theWord)
    {
        cout << "\nThat's it! You guessed it!\n";
    }

        cout << "\nyour score is: " << points << ".\n\n";

    if (points >= 100)
    {
        cout << "You scored 100 or more. Impressive!\n";
    }
    else if (points >= 75)
    {
        cout << "You scored 75 or more. Nice.\n";
    }
    else if (points >= 50)
    {
        cout << "You scored 50 or more. Decent.\n";
    }
    else
    {
        cout << "You scored less than 25. Nothing to brag about.\n";
    }

    cout << "\n\nThanks for playing.\n";

    return 0;
}

void guessgame(){
    srand(static_cast<unsigned int>(time(0))); //seed random number generator
    int secretNumber = rand() % 100 + 1; // random number between 1 and 100
    int tries = 0;
    int guess, select;
    cout << "\tWelcome to Guess My Number\n\n";
    cout << "Enter the number between 1 and 100: \n\n";
    cin >> guess;
    do{
    cout << "Your number is " <<secretNumber<<endl;
    cout << "1. Too high!\n\n";
    cout << "OR\n\n";
    cout << "2. Too low!\n\n";
    cout << "OR\n\n";
    cout << "3. Too Sure!\n\n";
    cin >> select;
    ++tries;
    if (select == 1){
            (secretNumber = secretNumber - (rand() % 20 + 1));
    }
    else if (select == 2){
            (secretNumber = secretNumber + (rand() % 20 + 1));
    }
    else
        {
            cout << "\nThats it! You got it in " << tries << " guesses!\n";
    }
    } while (select != 3);
}
