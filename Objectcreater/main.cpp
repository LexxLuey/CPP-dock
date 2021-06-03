//Simple Critter
//Demonstrates creating a new type
#include <iostream>
#include <string>
using namespace std;

string* Pwarriorname;

class Warrior // class definition –– defines a new type, Critter
{
    public:
        string m_Name;
        int m_Hunger; // data member
        double m_Health, m_Stamina;
        Warrior(int hunger = 0, int health =100, int stamina = 0, string namewarrior);

        void Greet(); // member function prototype
        void Taunt();
};

Warrior::Warrior(string namewarrior, int hunger, int health, int stamina, ){
    cout << "A new warrior has been born!" << endl;
    m_Hunger = hunger;
    m_Health = health;
    m_Stamina = stamina;
    m_Name = namewarrior

}

void Warrior::Greet() // member function definition
{
    cout << "Hi. I'm a Warrior. My hunger level is " << m_Hunger << ".\n";
}

void Warrior::Taunt() // member function definition
{
    cout << "You look weak like its been seven days, my stamina is " << m_Stamina << ".\n";
}


int main()
{
    Warrior ninja;
    ninja.m_Name = "ninja";
    Warrior samurai;
    samurai.m_Name = "samurai";

    cout << "Ninja hunger level: ";
    cin >> ninja.m_Hunger ;
    cout << "Ninja Health level: ";
    cin >>     ninja.m_Health ;
    cout << "Ninja Stamina level: ";
    cin >> ninja.m_Stamina ;
    cout << "Samurai hunger level: ";
    cin >> samurai.m_Hunger ;
    cout << "Samurai Health level: ";
    cin >> samurai.m_Health ;
    cout << "Samurai Stamina level: ";
    cin >> samurai.m_Stamina ;

    cout << "Ninja hunger level is " << ninja.m_Hunger << ".\n\n";
    cout << "Ninja Health level is " << ninja.m_Health << ".\n\n";
    cout << "Ninja Stamina level is " << ninja.m_Stamina << ".\n\n";

    cout << "Samurai hunger level is " << samurai.m_Hunger << ".\n\n";
    cout << "Samurai Health level is " << samurai.m_Health << ".\n\n";
    cout << "Samurai Stamina level is " << samurai.m_Stamina << ".\n\n";


    if (samurai.m_Stamina < 10 && ninja.m_Stamina > 50){
        string* Pwarriorname = ;
        ninja.Taunt();
        ninja.Greet();
    }

    if (samurai.m_Stamina > 50 && ninja.m_Stamina < 10){
        samurai.Taunt();
        samurai.Greet();
    }
    return 0;
}
