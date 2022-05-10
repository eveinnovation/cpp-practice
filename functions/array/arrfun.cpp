//
// Created by Ovidiu on 5/3/22.
//
// arrfun4.cpp -- functions with an array range
#include <iostream>

const int AR_SIZE = 8;

int sum_arr(const int * begin, const int * end);

int main() {
    int cookies[AR_SIZE] = {1,2,4,8,16,32,64,127};

    std::cout << cookies + AR_SIZE;

    int sum = sum_arr(cookies, cookies + AR_SIZE);

    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, cookies + 3); // first 3 elements
    std::cout << "First three eaters ate " << sum << " cookies.\n";

    sum = sum_arr(cookies + 4, cookies + 8); // last 4 elements
    std::cout << "Last four eaters ate " << sum << " cookies.\n";


}

// return the sum of an integer array
int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;
    for (pt = begin; pt != end; pt++)
        total = total + *pt;
    return total;
}

