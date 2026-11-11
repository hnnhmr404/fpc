#include <iostream>
using namespace std;

int main()
{
    char sure;

    cout << "Are you sure you want to quit? ";
    cin >> sure;

    while (sure != 'Y' && sure != 'N')
    {
        cout << "Are you sure you want to quit? ";
        cin >> sure;
    }
    return 0;
}