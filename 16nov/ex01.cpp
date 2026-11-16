#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;

    cout << "Enter any character: ";
    cin >> ch;
    if (isdigit(ch))
    {
        cout << ch;
        cout << " is a digit\n";
    }
    else if (isalpha(ch))
    {
        cout << ch;
        cout << " is a letter\n";
    }
    else
    {
        cout << ch;
        cout << " is a special character\n";
    }
    return 0;
}