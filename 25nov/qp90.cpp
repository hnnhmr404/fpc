#include <iostream>
using namespace std;

void try1(int p);
int try3(int r);

int main()
{
    int a = 2;
    cout << a << endl;
    try1(a);
    cout << a << endl;

    int b = 3;
    cout << b << endl;   // 3

    int c = 4;
    try3(c);             // returns 16, ignored
    cout << c << endl;   // 4

    c = try3(c);         // c becomes 16
    cout << c << endl;   // 16

    cout << try3(5) << endl; // 25
    return 0;
}

void try1(int p)
{
    p++;
    cout << p << endl;
}

int try3(int r)
{
    return r * r;
}