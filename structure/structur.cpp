//
// Created by Ovidiu on 3/19/22.
//
#include <iostream>

struct inflatable {
    char name[20];
    float volume;
    double price;
};

//Bit Fields in Structures
struct torgle_register
{
    unsigned int SN : 4; // 4 bits for SN value
    unsigned int : 4; // 4 bits unused
    bool goodIn : 1; // valid input (1 bit)
    bool goodTorgle : 1; // successful torgling
};

struct perks
{
    int key_number;
    char car[12];
} mr_smith, ms_jones; // two perks variables


int main() {
    using namespace std;

//    Bit Fields in Structures
    torgle_register tr = { 14, true, false };

    inflatable guest = {
            "gloria",
            1.88,
            29.9
    };

    //array of structs
    inflatable guests[2] = // initializing an array of structs
            {
                {"Bambi",    0.5,  21.99}, // first structure in array
                {"Godzilla", 2000, 565.99} // next structure in array
            };

    inflatable pal =
            {
                    "Audacious Arthur",
                    3.12,
                    32.99
            };

    perks mr_smith = {
            2,
            "jsdfs"
    };

    // NOTE: some implementations require using
// static inflatable guest =
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
// pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}

