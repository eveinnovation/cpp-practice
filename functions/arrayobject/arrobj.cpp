//
// Created by Ovidiu on 5/9/22.
// //arrobj.cpp -- functions with array objects (C++11)
//

#include <iostream>
#include <array>
#include <string>

const int SEASONS = 4;

const std::array<std::string, SEASONS> Snames = {"Spring", "Summer", "Fall", "Winter"};

//String literals are const:
//const char * bird = "wren";

// function to modify array object
void fill(std::array<double, SEASONS> * pa);
// function that uses array object without modifying it
void show(std::array<double, SEASONS> da);

int main() {

    std::array<double, SEASONS> expenses;

    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(std::array<double, SEASONS> * pa) {


    for (int i = 0; i < SEASONS; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> (*pa)[i]; //dereferentiaza pointer-ul
    }
}

void show(std::array<double, SEASONS> da)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < SEASONS; i++)
    {
        std::cout << Snames[i] << ": $" << da[i] << std::endl;
        total += da[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}

/*
 * fill(&expenses); // don't forget the &
...
cin >> (*pa)[i];
In the last statement, pa is a pointer to an array<double, 4> object, so *pa is the
object, and (*pa)[i] is an element in the object.The parentheses are required because of
operator precedence.The logic is straightforward, but results enhance opportunities for
making errors.
 * */