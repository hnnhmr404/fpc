#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double rate, balance;
    double deposit, withdrawal;
    double totalDeposit = 0, totalWithdrawal = 0;
    double totalInterest = 0;
    int months;

    cout << "Enter annual interest rate (%): ";
    cin >> rate;

    cout << "Enter starting balance: ";
    cin >> balance;

    cout << "Enter number of months: ";
    cin >> months;

    for (int i = 1; i <= months; i++)
    {
        cout << "\nMonth " << i << endl;

        cout << "Enter amount deposited: ";
        cin >> deposit;

        while (deposit < 0)
        {
            cout << "Invalid amount. Enter again: ";
            cin >> deposit;
        }
        balance += deposit;
        totalDeposit += deposit;

        cout << "Enter amount withdrawn: ";
        cin >> withdrawal;

        while (withdrawal < 0)
        {
            cout << "Invalid amount. Enter again: ";
            cin >> withdrawal;
        }
        balance -= withdrawal;
        totalWithdrawal += withdrawal;
        double interest = (rate / 100 / 12) * balance;
        balance += interest;
        totalInterest += interest;
    }

    cout << fixed << setprecision(2);
    cout << "\nEnding balance: RM" << balance << endl;
    cout << "Total deposits: RM" << totalDeposit << endl;
    cout << "Total withdrawals: RM" << totalWithdrawal << endl;
    cout << "Total interest earned: RM" << totalInterest << endl;
    return 0;
}