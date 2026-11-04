#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double mealCost = 88.67;
    double tax = mealCost * 0.0675;
    double subtotal = mealCost + tax;
    double tip = subtotal * 0.20;
    double totalBill = subtotal + tip;

    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax Amount: $" << tax << endl;
    cout << "Tip Amount: $" << tip << endl;
    cout << "Total Bill: $" << totalBill << endl;

    return 0;
}