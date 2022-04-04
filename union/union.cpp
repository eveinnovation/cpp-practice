//
//Unions
//        A union is a data format that can hold different data types but only one type at a time.
// Created by Ovidiu on 3/22/22.
//

#include <iostream>

union one4all {
    int int_val;
    long long_val;
    double double_val;
};

struct widget {
    char brand[20];
    int type;
    union id {
        long id_num;
        char id_char[20];
    } id_val;

};

/*An anonymous union has no name; in essence, its members become variables that share
        the same address. Naturally, only one member can be current at a time:*/

struct widget1
{
    char brand[20];
    int type;
    union // anonymous union
    {
        long id_num; // type 1 widgets
        char id_char[20]; // other widgets
    };
};

int main() {
    using namespace std;

//    one4all pail;
//    pail.int_val = 15; // store an int
//    cout << pail.int_val;
//    pail.double_val = 1.38; // store a double, int value is lost
//    cout << pail.double_val;


    widget prize;
    prize.type=1;
    prize.id_val.id_num = 5;

    if (prize.type == 1) // if-else statement (Chapter 6)
        cout << prize.id_val.id_num; // use member name to indicate mode
    else
        cout << prize.id_val.id_char;



    widget1 prize1;

    if (prize1.type == 1)
        cin >> prize1.id_num;
    else
        cin >> prize1.id_char;
    return 0;
};

