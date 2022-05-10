//
// Created by Ovidiu on 4/7/22.
//

#include <iostream>

const int MAX = 5;

// function prototypes
int fill_array(double properties[], int limit);
void show_array(const double ar[], int n); // don't change data
void revalue(double r, double ar[], int n);

int main() {
    using namespace std;
    double properties[MAX];

    int size = fill_array(properties, MAX);
}

int fill_array(double properties[], int limit) {
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        } else if (temp < 0) // signal to terminate
            break;
        properties[i] = temp;
    }
    return i;
}