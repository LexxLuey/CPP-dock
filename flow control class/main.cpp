#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
    //Declarations
    int iNo;
    double dUnitPr, dPriceExTax, dCustPrice, dTax;
    const double dTaxPerc = 25.0;
    //Entry of quantity and unit price
    cout<< "Specify quantity and unit price: ";
    cin >> iNo >> dUnitPr;
    //Calculations. First the price without tax
    dPriceExTax = dUnitPr * iNo;
    //then the tax amount
    dTax = dPriceExTax * dTaxPerc / 100;
    //and finally the customer price
    dCustPrice = dPriceExTax + dTax;
    //Output
    cout << endl << "INVOICE";
    cout << endl << "=======" << endl;
    cout << "Quantity:      " << setw(5) << iNo << endl;
    cout << setprecision(2) << setiosflags(ios::fixed);
    cout << "Price per unit:" << setw(8) << dUnitPr << endl;
    cout << "Total price:   "   << setw(8) << dCustPrice <<endl;
    cout << "Tax:           " << setw(8) << dTax << endl;
    */
    int n = 4, k = 2;
    cout << n-- << endl;
    cout << n << endl;




    /*
     int iNo;
    double dPrice, dTotal;
    cout << "Specify quantity: ";
    cin >> iNo;
    cout << "Specify unit price: ";
    cin >> dPrice;
    dTotal = dPrice * iNo;
    cout << "You entered the quantity " << iNo <<endl<< "and the price " << dPrice<<endl;
    cout << "==============================================" <<endl;
    cout << "Number of units: " << setw(5) <<iNo << endl;
    cout << "==============================================" <<endl;
    cout << setiosflags(ios::fixed) << setprecision(2);

    cout << "Price per unit: " << setw(8) <<dPrice << endl;
    cout << "==============================================" <<endl;
    cout << "Total price:    " << setw(8) <<dTotal<<endl;
    cout << "==============================================" <<endl;*/

    return 0;
}
