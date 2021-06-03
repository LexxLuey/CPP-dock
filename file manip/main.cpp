#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char cProd[30] = "";
    ofstream outfile("prodfile.txt");
    cout << endl << "Enter product, (only Enter to exit): ";
    cin.getline(cProd,29);
    while(cProd[0]!='\0')
    {
        outfile << cProd << endl;
        cout << endl << "Enter product: ";
        cin.getline(cProd,29);
    }
    outfile.close();


    ifstream infile("prodfile.txt");
    while(infile.getline(cProd,29))
        cout << cProd << endl;
    infile.close();

    cout << "Enter new product: ";
    cin.getline(cProd,29);
    ofstream outfile("prodfile.txt",ios::app);
    outfile << cProd << endl;
    outfile.close();

}
