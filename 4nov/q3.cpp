#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double purchase = 95;
    double stateTax = 0.04;
    double countryTax = 0.02;
    double salesTax;
    
    salesTax = purchase * stateTax * countryTax;
    cout << "The sales tax is " << salesTax << endl;
    
    return 0;
}