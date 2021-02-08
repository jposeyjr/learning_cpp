#include <iostream>
#include "tower.h"
 
int main()
{
    using namespace std;
    cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    cin >> initialHeight;
 
    int seconds = 0;
 
    // bool hitGround = false;
    // do
    // {
    //     hitGround = calculateAndPrintHeight(initialHeight, seconds++);
    // }
    // while (!hitGround);

    while (!calculateAndPrintHeight(initialHeight, seconds++));
 
    return 0;
}