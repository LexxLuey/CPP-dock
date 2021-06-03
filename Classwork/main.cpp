#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int n;
    int j;
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    char name [30];
    char fool_name [30];
    char op;
    float num1, num2;
    int _kissing, _choice, choice, space, rows;
    int quit = 0;
    void calc_func();
    void lineprint ();
    void gist_module();
string gist1 = "Database schema \nDatabase schema skeleton structure of and it represents the logical view of entire database. \nIt tells about how the data is organized and how relation among them is associated. \nIt formulates all database constraints that would be put on data in relations, \nwhich resides in database. \nA database schema defines its entities and the relationship among them. \nDatabase schema is a descriptive detail of the database, which can be depicted by means of schema diagrams. \nAll these activities are done by database designer to help programmers in order to give some ease of understanding all aspect of database. " ;
string gist2 = "There's a lot of data in whole database management system other than user's data. \nDBMS comprises of three kinds of schemas, which is in turn data about data (Meta-Data). \nMeta-data is also stored along with database, which once stored is then hard to modify. But as DBMS expands, it needs to be changed over the time satisfy the requirements of users. \nBut if the whole data were highly dependent it would become tedious and highly complex." ;
string gist3 = "Malware \n(malicious + software) is a software, which infiltrates an operating system in a seamless manner, \nwhether by human mistake or due to shortcomings of the operating system and software support, with malicious intentions." ;
string gist4 = "Hello... Did you know that your test is starting on 29 August?... No??? Now you know. " ;
string gist5 = "I dont feel like gisting with you sha..." ;


int main()
{
    cout << "Bonjour mon ami...\nTell me, wetin you want?!\n who are you to dey disturb my sleep? "<<endl;
    cout << "State your name at once! "<<endl;
    cout << " "<<endl;
    cin >> name;
    cout << "Okay Mr " << name << ", nice to meet you. my name is also " << name << "... "<< endl;
    lineprint ();
    while (quit == 0){

    calc_func();
    cout << "Can i help you with any other thing? "<<endl;
    cout << "0.Yes    1.No    3.Gist me about yourself. "<<endl;
    cin >> quit;
	  if (quit == 0) {
             calc_func();
    cout << "Can i help you with any other thing? "<<endl;
    cout << "0.Yes    1.No    3.Gist me about yourself. "<<endl;
    cin >> quit;
    lineprint ();
            }

	  else if (quit == 1){
        cout << "Your choice is irrelevant FOOL! good day and good bye."<<endl;
	      cout << "1. Why you call me a fool? "<<endl;
	      cout << "2. Why are you so mean? "<<endl;
	      cout << "3. You too goodbye. "<<endl;
	      cin >> _choice;
	      if (_choice == 1){
            cout << "Okay wetin make i call you? write am for me: "<<endl;
            cin >> fool_name;
            cout << "Na for your pocket you be " << fool_name << ". what you think is irrelevant. good day and good bye fool. ";
	      }
	      else if (_choice == 2){
            cout << "Because my aunty who is a witch trapped me inside this computer and i cant get out. \nonly the kiss of true love can free me. "<<endl;
            cout << "Will you kiss me and save me from my cage? "<<endl;
            cout << "1. Yes.    2. No "<<endl;
            cin >> _kissing;
            if (_kissing ==1){
                cout << "THOU FOOLISH ONE!!! HAHAHAHAHAHAHAAHAHAHAHAHAHA!!! I shall call you computer kisser "<<endl;
            }
            else {
                cout << "THOU FOOLISH ONE!!! HAHAHAHAHAHAHAAHAHAHAHAHAHA!!! I dont want your kuhruhkuhruh kiss either. "<<endl;
            }
	      }
        else {
            cout << "Next time i see you bring me ice cream or else... "<<endl;
        }
	      }
    else if (quit == 3){
        cout << "SHABA" <<endl;
        lineprint ();
        gist_module();
    }
    else {
        cout << "Error";
    }


	  }

}

void calc_func(){
    cout << "So what do you want me to do for you? "<<endl;
    cout << "1: Multiplication Table. " << "2: Quadratic equation. " << "3: Design pyramid. " << "4: Calculator. " <<endl;
    cout << " "<<endl;
    cin >> choice;
    if (choice == 1) {
	            cout << "Alright " <<name<< "... Enter a positive integer that you want its time table: ";
	            cin >> n;
	            cout << "Oya now enter the range of " <<n<< " times table: ";
	            cin >> j;
	            for (int i = 1; i <= j; ++i) {
                        cout << n << " times " << i << " is " << n * i << endl;
                }
    }


    else if (choice == 2) {
	            cout << "Alright " <<name<< "... Enter coefficients a, b and c of the equation you want to solve: ";
	            cin >> a >> b >> c;
	            discriminant = b*b - 4*a*c;
	            if (discriminant > 0) {
                        x1 = (-b + sqrt(discriminant)) / (2*a);
                        x2 = (-b - sqrt(discriminant)) / (2*a);
                        cout << "Roots are real and different." << endl;
                        cout << "x1 = " << x1 << endl;
                        cout << "x2 = " << x2 << endl;
                }
                else if (discriminant == 0) {
                        cout << "Roots are real and same." << endl;
                        x1 = (-b + sqrt(discriminant)) / (2*a);
                        cout << "x1 = x2 =" << x1 << endl;
                }
                else {
                        realPart = -b/(2*a);
                        imaginaryPart =sqrt(-discriminant)/(2*a);
                        cout << "Roots are complex and different."  << endl;
                        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
                        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
                }
    }

    else if (choice == 3) {
	            cout <<"Alright " <<name<< "... Enter number of rows for your pyramid: ";
	            cin >> rows;
	            for(int i = 1, k = 0; i <= rows; ++i, k = 0)
                    {
	                for(space = 1; space <= rows-i; ++space)
	                {
	                    cout <<"  ";
                }
                while(k != 2*i-1)
                    {
                        cout << "* ";
                        ++k;
                }
                cout << endl;
                }

    }

	 else if (choice == 4) {
	            cout << "Enter operator either + or - or * or /: "<<endl;
	            cin >> op;
                cout << "Enter two operands: "<<endl;
                cin >> num1 >> num2;
                switch(op)
                {
                    case '+':
                        cout << num1+num2;
                        break;

                    case '-':
                        cout << num1-num2;
                        break;

                    case '*':
                        cout << num1*num2;
                        break;

                    case '/':
                        cout << num1/num2;
                        break;

                    default:
                        // If the operator is other than +, -, * or /, error message is shown
                        cout << "Error! you entered an operator that is not correct..."<<endl;
                        break;
                }
	 }

	  else {
        cout << "Mtscheeeeeeew... you see " <<choice<< " among the options?... nonesense. " <<endl;
	  }
    }


void gist_module(){

 srand( (unsigned)time( 0 ) );
 int r = rand() % 5;
 if (r == 1){
    cout << gist1 << endl;
 }
 else if (r == 2){
    cout << gist2 << endl;
 }
 else if (r == 3){
    cout << gist3 << endl;
 }
 else if (r == 4){
    cout << gist4 << endl;
 }
 else {
    cout << gist5 << endl;
 }
}
void lineprint (){
for ( int i = 1; i < 3; i++ ){
        cout << "***************************************************************" <<endl;
        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" <<endl;

    }
}
