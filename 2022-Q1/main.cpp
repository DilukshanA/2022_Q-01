#include <iostream>

using namespace std;

class cProduct{

private:
    double unitCost;
    double unitPrice;

public:

    cProduct(double price , double cost);

    // Getters
    double getUnitProfit();
    double getUnitPrice();
    double getUnitCost();

    // Setters
    void setUnitPrice(double uprice);
    void setUnitCost(double ucost);

    // Display
    void display();

};
cProduct::cProduct(double price , double cost){
    unitCost = cost;
    unitPrice = price;
}
//=========================================
// Profit
double cProduct::getUnitProfit(){

    return unitPrice - unitCost;
}
// Unit price
double cProduct::getUnitPrice(){

    return unitPrice;
}
// Unit cost
double cProduct::getUnitCost(){

    return unitCost;
}

//=========================================

void cProduct::setUnitPrice(double uprice){
    unitPrice = uprice;
}

void cProduct::setUnitCost(double ucost){
    unitCost = ucost;
}

void cProduct::display(){
    cout << "Unit Cost   : " << unitCost << endl;
    cout << "Unit Price  : " << unitPrice << endl;
    cout << "Unit Profit : " << getUnitProfit() << endl;
}

//=========================================

int main()
{
    cProduct obj1(200,150);
    obj1.display();

    return 0;
}

