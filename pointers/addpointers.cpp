//
// Created by Ovidiu on 3/23/22.
//
#include <iostream>

int main() {

    using namespace std;
    double wages[3] = {100.0, 128.8, 34.9};
    short stacks[3] = {3, 2, 1};

    // Here are two ways to get the address of an array
    double * pw = wages; // name of an array = address
    short * ps = &stacks[0]; // or use address operator

    // with array element
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0]
         << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks
         << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    cout << sizeof(wages) << " = bytes size of wages array\n";
    cout << sizeof(pw) << " = bytes size of pw pointer\n";

    return 0;
}

