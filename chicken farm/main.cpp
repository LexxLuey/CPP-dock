#include <iostream>

using namespace std;
float calculator();
void linedraw();
void linedraw()
{
cout << "*****************************************************"<<endl;
}

float calculator(){
    int layers, broilers, salary, amt_staff, price_feed, price_feedlay, price_feedbro;
    int price1, layer_price, cost, broiler_price;
    double eggs, profit, amt_feed, amt_feedlay, amt_feedbro;
    cout << "How many layers do you want for your farm? " << endl;
    cin >> layers;
    linedraw();
    cout << "How much does a layer cost? " << endl;
    int layer_cost, layer_sale;
    cin >> layer_cost;
    linedraw();
    cout << "How much does a layer sell? " << endl;
    cin >> layer_sale;
    linedraw();
    cout << "How many eggs will one 'layer' lay per day? " << endl;
    cin >> eggs;
    linedraw();
    cout << "How much does an egg sell? " << endl;
    int egg_cost;
    cin >> egg_cost;
    linedraw();
    cout << "How much is a bag of feed for layer? " << endl;
    cin >> price_feedlay;
    cout << "How much is a bag of feed for broiler? " << endl;
    cin >> price_feedbro;
    price_feed = price_feedlay + price_feedbro;
    linedraw();
    cout << "How many broilers do you want for your farm? " << endl;
    cin >> broilers;
    linedraw();
    cout << "How much does a broiler cost? " << endl;
    int broiler_cost, broiler_sale;
    cin >> broiler_cost;
    linedraw();
    cout << "How much does a broiler sell? " << endl;
    cin >> broiler_sale;
    amt_feedlay = ((layers/350)*(30*12));
    amt_feedbro = ((broilers/350)*(30*2));
    amt_feed = amt_feedlay + amt_feedbro;
    linedraw();
    cout << "How much staff do you need? " << endl;
    cin >> amt_staff;
    linedraw();
    cout << "How much is their salary on the average? " << endl;
    cin >> salary;
    layer_price = (layers * layer_cost);
    broiler_price = (broilers * broiler_cost);
    int revenue = (eggs*layers*egg_cost*30*12) + (broilers * broiler_sale) + (layers * layer_sale);
    cost = broiler_price + layer_price + ((salary * amt_staff) * 12) + (price_feed * amt_feed);
    profit = revenue - cost;
    price1 = revenue - cost;
    linedraw();
   /* cout << "You need N" << layer_price << " for "<< layers << " layers." << endl;
    broiler_price = (broilers * broiler_cost);
    linedraw();
    cout << "You need N" << broiler_price << " for "<< broilers<< " broilers." << endl;
    linedraw();
    cout << "You need " << amt_feed << " bags of feed for your farm." << endl;
    cout << "You need N" << amt_feed*price_feed << " to buy feeds for your farm." << endl;
    linedraw();
    cost = broiler_price + layer_price + ((salary * amt_staff) * 12) + (price_feed * amt_feed);
    cout << "You need N" << cost << " for your farm to run for a business year." << endl;
    int revenue = (eggs*layers*egg_cost*30*15) + (broilers * broiler_sale) + (layers * layer_sale);
    linedraw();
    cout << "Your revenue will be N" << revenue << " for your farm." << endl;
    linedraw();
    cout << "Your eggs per day will be " << eggs*layers << " for your farm." << endl;
    cout << "Your eggs money per day will be N" << eggs*layers*egg_cost << " for your farm." << endl;
    cout << "Your eggs at end will be " << eggs*layers*30*6 << " for your farm." << endl;
    cout << "Your eggs money at end will be N" << eggs*layers*egg_cost*30*6 << " for your farm." << endl;
    linedraw();
    cout << "Your layers will be " << layers << " for your farm." << endl;
    cout << "Your layers money will be " << layers*layer_sale << " for your farm." << endl;
    linedraw();
    cout << "Your broilers will be " << broilers << " for your farm." << endl;
    cout << "Your broilers money will be " << broilers*broiler_sale << " for your farm." << endl;
    profit = revenue - cost;
    price1 = revenue - cost; */
    linedraw();
    cout << "Your profit will be N" << profit << " for your farm." << endl;
    cout << "Your profit will be N" << price1 << " for your farm." << endl;
    linedraw();
    cout << "Amount of layers: " << layers << "." << endl;
    cout << "Amount of broilers: " << broilers << "." << endl;
    cout << "Amount of bags of layer feed: " << amt_feedlay << "." << endl;
    cout << "Amount of bags of broiler feed: " << amt_feedbro << "." << endl;
    cout << "Amount of bags of feed: " << amt_feed << "." << endl;
    cout << "Amount of staff: " << amt_staff << "." << endl;
    cout << "Salary per staff: N" << salary << "." << endl;
    cout << "Salary per month total: N" << amt_staff*salary << "." << endl;
    cout << "Total Salary per year: N" << amt_staff*salary*12 << "." << endl;
    cout << "Cost of " << layers << " layers: N" << layer_price << endl;
    cout << "Cost of " << broilers << " broilers: N" << broiler_price << endl;
    cout << "Cost of bag of layer feed: N" << price_feedlay << "." << endl;
    cout << "Cost of bag of broiler feed: N" << price_feedbro << "." << endl;
    cout << "Total Cost of " << amt_feed << " bags of feed: N" << amt_feed*price_feed << endl;
    cout << "Total Cost of farm: N" << cost << "." << endl;
    linedraw();
    cout << "Amount of eggs per day: " << eggs*layers << "." << endl;
    cout << "Amount of eggs per month: " << eggs*layers*30 << "." << endl;
    cout << "Amount of eggs after 12 months: " << eggs*layers*30*12 << "." << endl;
    cout << "Revenue from " << eggs*layers << " eggs per day: N" << eggs*layers*egg_cost << "." << endl;
    cout << "Revenue from " << eggs*layers*30 << " eggs per month: N" << eggs*layers*egg_cost*30 << "." << endl;
    cout << "Revenue from " << eggs*layers*30*12 << " eggs after 12 months: N" << eggs*layers*egg_cost*30*12 << "." << endl;
    cout << "Revenue from " << layers << " layers: N" << layers*layer_sale << "." << endl;
    cout << "Revenue from " << broilers << " broilers: N" << broilers*broiler_sale << "." << endl;
    cout << "Total Revenue of farm after 12 months: N" << revenue << "." << endl;
    linedraw();
    if ( price1 >= 0){
        cout << "Total Profit: N" << price1 << "." << endl;
    }
    else {
        cout << "Total Loss: N" << price1 << "." << endl;
    }
    return 0;

}
int main()
{
    calculator();
    return 0;
}
