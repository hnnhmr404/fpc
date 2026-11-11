#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;
    char choice;

    do
    {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        sum = num1 + num2;
        cout << "Sum = " << sum << endl;

        cout << "Do you wish to perform the operation again? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Program terminated." << endl;
    return 0;
}