#include <iostream>
#include "tower.h"
#include "reverse.h"
 
int main()
{
    using namespace std;
    string str = "Hello"; 
    int N = str.length();
    cout << reverseStr(str, N) << '\n';

    cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    cin >> initialHeight;
 
    int seconds = 0;

    while (!calculateAndPrintHeight(initialHeight, seconds++));
    return 0;
}