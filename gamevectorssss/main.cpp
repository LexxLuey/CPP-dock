// High Scores
// Demonstrates algorithms
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

void linedraw();
void linedraw()
{
cout << "*****************************************************"<<endl;
cout << "*****************************************************"<<endl;
}

int main()
{
vector<string> inventory;
inventory.push_back("sword");
inventory.push_back("armor");
inventory.push_back("shield");
vector<string>::iterator myIterator;
vector<string>::const_iterator iter;
linedraw();
cout << "Your items:\n";
for (iter = inventory.begin(); iter != inventory.end(); ++iter)
{
cout << *iter << endl;
}
linedraw();
cout << "\nYou trade your sword for a battle axe.";
myIterator = inventory.begin();
*myIterator = "battle axe";
cout << "\nYour items:\n";
for (iter = inventory.begin(); iter != inventory.end(); ++iter)
{
cout << *iter << endl;
}
cout << "\nThe item name '" << *myIterator << "' has ";
cout << (*myIterator).size() << " letters in it.\n";
cout << "\nThe item name '" << *myIterator << "' has ";
cout << myIterator->size() << " letters in it.\n";
linedraw();
cout << "\nYou recover a crossbow from a slain enemy.";
inventory.insert(inventory.begin(), "crossbow");
cout << "\nYour items:\n";
for (iter = inventory.begin(); iter != inventory.end(); ++iter)
{
cout << *iter << endl;
}
linedraw();
cout << "\nYour armor is destroyed in a fierce battle.";
inventory.erase((inventory.begin() + 2));
cout << "\nYour items:\n";
for (iter = inventory.begin(); iter != inventory.end(); ++iter)
{
cout << *iter << endl;
}
linedraw();
vector<int>::const_iterator iter5;
cout << "\nCreating a list of scores.\n";
vector<int> scores;
scores.push_back(1500);
scores.push_back(3500);
scores.push_back(7500);

linedraw();
cout << "\nHigh Scores:\n";
for (iter5 = scores.begin(); iter5 != scores.end(); ++iter5)
{
cout << *iter5 << endl;
}
linedraw();
cout << "\nFinding a weapon.";
string weapon;
cout << "\nEnter a weapon to find: ";
cin >> weapon;
iter = find(inventory.begin(), inventory.end(), weapon);
if (iter != inventory.end())

{
cout << "Weapon found.\n";
}
else
{
cout << "Weapon not found.\n";
}
linedraw();
cout << "Add a weapon to your inventory from the armory.\n";
vector<string> armory;
armory.push_back("grenade");
armory.push_back("shurikens");
armory.push_back("kunai");
armory.push_back("smokebomb");
cout << "\nThe armory:\n";
for (iter = armory.begin(); iter != armory.end(); ++iter)
{
cout << *iter << endl;
}
cout << "\nChoose a weapon:\n";
vector<string>::iterator user_weapon1;
string user_weapon;
cin >> user_weapon;
iter = find(armory.begin(), armory.end(), user_weapon);
if (iter != armory.end())
{
cout << "\nWeapon found and added.\n";
user_weapon1 = armory.erase(find(armory.begin(), armory.end(), user_weapon));
inventory.insert(inventory.begin(), user_weapon);
}
else
{
cout << "\nWeapon not found and not added.\n";
}
linedraw();
cout << "\nThe armory:\n";
for (iter = armory.begin(); iter != armory.end(); ++iter)
{
cout << *iter << endl;
}
cout << "\nRandomizing inventory.";
srand(static_cast<unsigned int>(time(0)));
random_shuffle(inventory.begin(), inventory.end());
cout << "\nWeapons:\n";
for (iter = inventory.begin(); iter != inventory.end(); ++iter)
{
cout << *iter << endl;
}
cout << "\nSorting scores.";
sort(scores.begin(), scores.end());
cout << "\nHigh Scores:\n";
for (iter5 = scores.begin(); iter5 != scores.end(); ++iter5)
{
cout << *iter5 << endl;
}
return 0;
}



/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
vector<string> inventory;
inventory.push_back("sword");
inventory.push_back("armor");
inventory.push_back("shield");
vector<string>::iterator myIterator;
vector<string>::const_iterator iter;
cout << "Your items:\n";
for (iter = inventory.begin(); iter != inventory.end(); ++iter)
{
cout << *iter << endl;
}
cout << "\nYou trade your sword for a battle axe.";
myIterator = inventory.begin();
*myIterator = "battle axe";
cout << "\nYour items:\n";
for (iter = inventory.begin(); iter != inventory.end(); ++iter)
{
cout << *iter << endl;
}
cout << "\nThe item name '" << *myIterator << "' has ";
cout << (*myIterator).size() << " letters in it.\n";
cout << "\nThe item name '" << *myIterator << "' has ";
cout << myIterator->size() << " letters in it.\n";
cout << "\nYou recover a crossbow from a slain enemy.";
inventory.insert(inventory.begin(), "crossbow");
cout << "\nYour items:\n";
for (iter = inventory.begin(); iter != inventory.end(); ++iter)
{
cout << *iter << endl;
}
cout << "\nYour armor is destroyed in a fierce battle.";
inventory.erase((inventory.begin() + 2));
cout << "\nYour items:\n";
for (iter = inventory.begin(); iter != inventory.end(); ++iter)
{
cout << *iter << endl;
}
return 0;
}
*/
/*132 Chapter 4 n The Standard Template Library: Hangman*/
