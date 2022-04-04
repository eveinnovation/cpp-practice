//
// Created by Ovidiu on 3/16/22.
//
#include <iostream>

/*Classifying Data Types
        C++ brings some order to its basic types by classifying them into families. Types signed
char, short, int, and long are termed signed integer types. C++11 adds long long to
that list. The unsigned versions are termed unsigned integer types. The bool, char,
wchar_t, signed integer, and unsigned integer types together are termed integral types or
integer types. C++11 adds char16_t and char32_t to that list. The float, double, and
long double types are termed floating-point types. Integer and floating-point types are collectively
termed arithmetic types.*/


int main() {
    using namespace std;
    char ch = 'M';
    int i = ch;

    cout << "The ASCII code for " << ch << " is " << i << "\n";

    cout << "Add one to the character code:" << endl;
    ch = ch + 1; // change character code in ch
    i = ch; // save new character code in i
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    //for char that doesn't fit the default 8 bit space:
//    On a system with a 2-byte wchar_t, this code stores each character in a 2-byte unit of
//    memory.
    wchar_t largechar;

//    C++11 introduces the types char16_t, which is
//    unsigned and 16 bits, and char32_t, which is unsigned and 32 bits.
    char16_t unsignedChar;
    char32_t unsignedChar;
}
