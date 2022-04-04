//
// Created by Ovidiu on 3/17/22.
//

/*
  (typeName) value // converts value to typeName type
typeName (value) // converts value to typeName type
The first form is straight C.The second form is pure C++.

 Convert numeric type to another: static_cast<> operator
 */

#include <iostream>

int main() {
    using namespace std;

    int auks, bats, coots;

    auks = 19.99 + 11.99;

    // these statements add values as int
    bats = (int) 19.99 + (int) 11.99; // old C syntax
    coots = int (19.99) + int (11.99); // new C++ syntax
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;
    char ch = 'Z';
    cout << "The code for " << ch << " is "; // print as char
    cout << int(ch) << endl; // print as int
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl; // using static_cast
    return 0;
}

