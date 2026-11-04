#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double payAmount = 2200.0;
    int payPeriods = 26;
    double annualPay;

    annualPay = payAmount * payPeriods;

    cout << fixed << setprecision(2);
    cout << "Annual Pay: $" << annualPay << endl;

    return 0;
}