#include <iostream>
#include <cstdlib>
using namespace std;

void function();

int main()
{
    function();
    cout << "Bye from main.\n";

    return 0;
}

void function()
{
    cout << "Bye! from function before exit\n";

    exit(0);

    cout << "Bye! from function before exit\n";
}