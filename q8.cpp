#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 = 6.95;
	double item4 = 12.95;
	double item5 = 3.95;
    double subtotal = item1 + item2 + item3 + item4 + item5;
	double tax = 0.07;
	double ptax = subtotal * tax;
	double total = subtotal + ptax;
    
    cout << "the price for item 1 is " << item1 << endl;
    cout << "the price for item 2 is " << item2 << endl;
    cout << "the price for item 3 is " << item3 << endl;
    cout << "the price for item 4 is " << item4 << endl;
    cout << "the price for item 5 is " << item5 << endl;
    cout << "the subtotal is " << subtotal << endl;
    cout << "the sale tax is " << ptax << endl;
    cout << "the total is " << total << endl;

    return 0;
}