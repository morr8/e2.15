/*
 •• E2.15
 Write a program that reads an integer and breaks it into a sequence of individual digits. For example, the input 16384 is displayed as
 
 1 6 3 8 4
 You may assume that the input has no more than five digits and is not negative.
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Enter a number no more than five digits and is not negative: ";
    string number;
    cin >> number;
    
    cout << number.substr(0, 1) << " " << number.substr(1, 1) << " " << number.substr(2, 1) << " " << number.substr(3, 1) << " " << number.substr(4, 1) << endl;
    
    
}
