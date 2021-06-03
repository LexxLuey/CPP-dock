#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
void lineprinter();
// function to generate and retrun random numbers.
int * getRandom( )
{
static int r[10];
// set the seed

 srand( (unsigned)time( NULL ) );
for (int i = 0; i < 10; ++i)
{
r[i] = rand();
cout << r[i] << endl;
}
return r;
}
// main function to call above defined function.
int main ()
{
// a pointer to an int.
lineprinter();
int *p;
p = getRandom();
for ( int i = 0; i < 10; i++ )
{
cout << "*(p + " << i << ") : ";
cout << *(p + i) << endl;
}
lineprinter();
string str1 = "Hello mon ami... cava...";
string str2 = "Bonjour World";
string str3;
int len ;
// copy str1 into str3
str3 = str1;
cout << "str3 : " << str3 << endl;
// concatenates str1 and str2
str3 = str1 + str2;
cout << "str1 + str2 : " << str3 << endl;
// total length of str3 after concatenation
len = str3.size();
cout << "str3.size() : " << len << endl;
return 0;
}
void lineprinter(){
    for ( int i = 0; i < 2; i++ ) {
        cout << "****************************************************" << endl;
    }
}
