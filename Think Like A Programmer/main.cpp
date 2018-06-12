//
//  main.cpp
//  Think Like A Programmer
//
//  Created by Sander on 12/06/2018.
//  Copyright © 2018 Sander. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    char digit;
    
    cout << "Enter a one-digit number: ";
    cin >> digit;
    
//    int sum = digit - '0';
    int digitAsNumber = digit;
    
//    cout << "Is the sum of digits " << sum << "?\n";
    cout << "This is the digit as a number: " << digitAsNumber << endl;
    
    return 0;
}
