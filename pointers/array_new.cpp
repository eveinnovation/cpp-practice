//
// Created by Ovidiu on 3/23/22.
//
#include <iostream>

int main() {
    using namespace std;

    double * p3 = new double [1];

    p3[0] = 0.2; // treat p3 like an array name
    p3[1] = 0.5;
    p3[2] = 0.8;
    p3[3] = 0.6;
    cout << "p3[1] is " << p3[1] << ".\n";
    cout << "p3[3] is " << p3[3] << ".\n";
    p3 = p3 + 1; // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1; // point back to beginning
    delete [] p3; // free the memory
    return 0;
}
