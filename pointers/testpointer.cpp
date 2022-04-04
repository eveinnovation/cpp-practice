//
// Created by Ovidiu on 3/24/22.
//
#include <iostream>


int main() {
    using namespace std;

    string coin = "dolar";
    char name[20] = "ovidiu";
    int n = 8;
    string * pointer_to_string = new string;
    char * pointer_to_char ;
    int * number;



    //address operator = &
    //dereferencing operator = *

//    pointer_to_string = &coin;

 *pointer_to_string = "nameaa";

//    pointer_to_string->append("holla");

pointer_to_char = name;
number = &n;

    cout << pointer_to_string << endl;
    cout << *pointer_to_string << endl;
    cout << pointer_to_char << endl;
    cout << &coin << endl;

    delete pointer_to_string;

    return 0;
}