#include <iostream>
using namespace std;

int main()
{
    double oceanRise = 1.5;
    double rise5Years = oceanRise * 5;
    double rise7Years = oceanRise * 7;
    double rise10Years = oceanRise * 10;

    cout << "Ocean level rise in 5 years: " << rise5Years << " millimeters" << endl;
    cout << "Ocean level rise in 7 years: " << rise7Years << " millimeters" << endl;
    cout << "Ocean level rise in 10 years: " << rise10Years << " millimeters" << endl;

    return 0;
}