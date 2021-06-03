#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    while (age >= 0){

    cout << "Hello there, please type in your age and then press enter: " ;
    cin >> age;
    if (age > 0 && age <=3 ){
        cout << "You are a baby because your age is "<< age<<" ." << endl;
    }
    else if (age <=9 ){
        cout << "You are a child because your age is "<< age<<" ." << endl;
    }
    else if (age <=19 ){
        cout << "You are a teenager because your age is "<< age<<" ." << endl;
    }
    else if (age <=30 ){
        cout << "You are an adult because your age is "<< age<<" ." << endl;
    }
    else if (age <=50 ){
        cout << "You are a middle aged citizen because your age is "<< age<<" ." << endl;
    }
    else if (age <=90 ){
        cout << "You are a senior citizen because your age is "<< age<<" ." << endl;
    }
    else if (age <=110 ){
        cout << "You are a Methuselah because your age is "<< age<<" ." << endl;
    }
    else {
        cout << "You are an error because your age is invalid."<< endl;
    }
    }
    return 0;
}
