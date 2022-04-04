#include <iostream>
#include <cmath>

using namespace std;

void simon(int);

int bananas(int);

int bananas(int ban) {
    int b=6;
    return ban+b;
}

int main() {
    cout << "test";
    cout << endl;
    cout << "vla";
    cout << endl;


    int carrots;

    cout << "how many carrots to you want?" << endl;
    cin >> carrots;
    cout << "This how many carrots: " << carrots << endl;

    int x = sqrt(carrots);

    cout << "Square rout :" << x << endl;

    simon(x);

    int (5);

    cout << "How many bananas are initialized: " << bananas << endl;
    return 0;
}

void simon(int n) {
    cout << n << endl;
}