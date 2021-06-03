#include <iostream>
using namespace std;
void swap(int *x, int *y);
void lineprinter();
double getAverage(double arr[], int size);


int main() {
    int a = 100;
int b = 200;
cout << "Before swap, value of a :" << a << endl;
cout << "Before swap, value of b :" << b << endl;
/* calling a function to swap the values.
* &a indicates pointer to a ie. address of variable a and
* &b indicates pointer to b ie. address of variable b.
*/
swap(&a, &b);
cout << "After swap, value of a :" << a << endl;
cout << "After swap, value of b :" << b << endl;
// an array with 5 rows and 2 columns.
int c[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
// output each array element's value
cout << "*****************************************" <<endl;
cout << "*****************************************" <<endl;
for ( int i = 0; i < 5; i++ )
for ( int j = 0; j < 2; j++ )

{

cout << "c[" << i << "][" << j << "]: ";
cout << c[i][j]<< endl;
}
cout << "*****************************************" <<endl;
cout << "*****************************************" <<endl;
// an array with 5 elements.
lineprinter();
double balance[6] = {1000.0, 2.0, 5.6, 3.4, 17.0, 50.0,};
double *p;
p = balance;
// output each array element's value
cout << "Array values using pointer " << endl;
for ( int i = 0; i < 5; i++ )
{
cout << "*(p + " << i << ") : ";
cout << *(p + i) << endl;
}
cout << "Array values using balance as address " << endl;
for ( int i = 0; i < 5; i++ )
{
cout << "*(balance + " << i << ") : ";
cout << *(balance + i) << endl;
}
lineprinter();
double avg;
// pass pointer to the array as an argument.
avg = getAverage( balance, 5 ) ;
// output the returned value
cout << "Average value is: " << avg << endl;
return 0;
}
// function definition to swap the values.
void swap(int *x, int *y)
{
int temp;
temp = *x; /* save the value at address x */
*x = *y; /* put y into x */
*y = temp; /* put x into y */
return;
}

void lineprinter(){
    for ( int i = 0; i < 2; i++ ) {
        cout << "****************************************************" << endl;
    }

}

double getAverage(double arr[], int size)
{
int i, sum = 0;
double avg;
for (i = 0; i < size; ++i)
{
sum += arr[i];
}
avg = double(sum) / size;
return avg;
}
/*    int i, j, x;
    cin >> x;
    for(i=2; i<x; i++) {
            for(j=2; j <= (i/j); j++)
            if(!(i%j))
                break; // if factor found, not prime
    if(j > (i/j)) cout << i << " is prime\n";
}
return 0;*/
