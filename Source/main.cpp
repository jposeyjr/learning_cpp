#include <iostream>
#include <string>
#include "tower.h"
#include "reverse.h"

enum Color {
    red, //0 
    blue, //1 etc for values 
    green, 
};

void printColor(Color color) {//how to get the none index value of an enum 
   switch(color) {
       case red: 
       std::cout << "Red" << '\n';
       break; 
       case blue: 
       std::cout << "Blue" << '\n';
       break; 
       case green: 
       std::cout << "Green" << '\n';
       break;
       default:
       std::cout << "Who knows!" << '\n';
   }
}
 
int main()
{
    using namespace std;
    int health = 100;
    void* ptr = &health;
    string str = "Hello"; 
    int N = str.length();
    cout << reverseStr(str, N) << '\n' << "pointer location " << &N << '\n';
    Color house { blue }; //value is 1 
    cout << house << '\n';
    printColor(blue); //prints the color blue 
    cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    cin >> initialHeight;
 
    int seconds = 0;

    while (!calculateAndPrintHeight(initialHeight, seconds++));
    return 0;
}