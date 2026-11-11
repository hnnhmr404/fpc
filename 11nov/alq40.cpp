#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    
    do
    {
        cout << "enter a number: ";
        cin >> x;
    } while (x > 0);
    return 0;
}
