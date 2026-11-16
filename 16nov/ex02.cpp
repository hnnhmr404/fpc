#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char str[20];

    cout << "Enter any word: ";
    cin >> str;
    for (int i=0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else 
            str[i] = tolower(str[i]);
    }
    cout << str << endl;
    return 0;
}