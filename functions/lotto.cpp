//
// Created by Ovidiu on 5/2/22.
//
#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main() {

    double total, choices;
    std::cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed:\n";

    while ((std::cin >> total >> choices) && choices <= total)
    {
        std::cout << "You have one chance in ";
        std::cout << probability(total, choices); // compute the odds
        std::cout << " of winning.\n";
        std::cout << "Next two numbers (q to quit): ";
    }
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ;
    return result;
}
