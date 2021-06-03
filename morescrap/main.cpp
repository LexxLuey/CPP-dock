#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#include <iomanip>
using std::setw;

int main (){
    int i,j;
    // set the seed
    srand( (int)time( 0 ) );
    /* generate 10 random numbers. */
    for( i = 0; i < 10; i++ ){
            // generate actual random number
            j= rand() % 100;
    cout <<" Random Number : " << j << endl;
    }
    int n[ 10 ]; // n is an array of 10 integers
    // initialize elements of array n to 0
    for ( int i = 0; i < 10; i++ ){
            n[ i ] = i + j; // set element at location i to i + 100
    }
    cout << "Element" << setw( 13 ) << "Value" << endl;
    // output each array element's value
    for ( int j = 0; j < 10; j++ ){
            cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
    }
    return 0;
    }

/*int sum(int a, int b=20)
{
int result;
result = a + b;
return (result);
}
int main ()
{
// local variable declaration:
int a = 100;
int b = 200;
int result;
// calling a function to add the values.
result = sum(a, b);
cout << "Total value is :" << result << endl;
// calling a function again as follows.
result = sum(b);
cout << "Total value is :" << result << endl;
return 0;
}*/
