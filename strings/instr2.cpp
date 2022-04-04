//
// Created by Ovidiu on 3/17/22.
//
#include <iostream>


//getline(...)
int main() {
    using namespace std;
    const int ARR_SIZE = 20;
    char name[ARR_SIZE];

    cout << "Enter your name: \n";
    cin.getline(name, ARR_SIZE);

    cout << " for you, " << name << ".\n";

    return 0;
}

