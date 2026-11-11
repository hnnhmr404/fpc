#include <iostream>
using namespace std;

int main()
{
    int number, product = 0;

    while (product < 100)
    {
        cout << "Enter a number: ";
        cin >> number;

        product = number * 10;
    }
    cout << "Product: " << product << endl;
    return 0;
}