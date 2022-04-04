//
// Created by Ovidiu on 3/18/22.
//more string class features
//

#include <iostream>

int main() {
    using namespace std;
    const int SIZE = 20;
    char charr1[SIZE];
    char charr2[SIZE] = "jaguar";

    string str1;
    string str2 = "panther";

// assignment for string objects and character arrays
    str1 = str2; // copy str2 to str1
    strcpy(charr1, charr2); // copy charr2 to charr1
// appending for string objects and character arrays
    str1 += " paste"; // add paste to end of str1
    strcat(charr1, " juice"); // add juice to end of charr1

    // finding the length of a string object and a C-style string
    int len1 = str1.size(); // obtain length of str1
    int len2 = strlen(charr1); // obtain length of charr1
    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";
    return 0;
}

