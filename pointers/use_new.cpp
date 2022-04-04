//
// Created by Ovidiu on 3/23/22.
//
#include <iostream>

int main() {
    using namespace std;

    int nights = 1001;
    int * pt = new int;
    *pt = 1001;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;

    double * pd = new double; // allocate space for a double
    *pd = 10000001.0; // store a double there
    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    return 0;
}
