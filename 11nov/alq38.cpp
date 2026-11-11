#include <iostream>
using namespace std;

int main()
{
    int number, total = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter a number: ";
        cin >> number;

        total += number;
    }
    cout << "The total is: " << total << endl;
    return 0;
}