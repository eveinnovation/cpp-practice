//
// Created by Ovidiu on 5/3/22.
//

#include <iostream>

const int MAX = 5;

// function prototypes
int fill_array(double ar[], int limit);

void show_array(const double ar[], int n); // don't change data

void revalue(double r, double ar[], int n);

int main() {
    double properties[MAX];
    int size = fill_array(properties, MAX);

    show_array(properties, size);
    if (size > 0) {
        std::cout << "Enter revaluation factor: ";
        double factor;
        while (!(std::cin >> factor)) // bad input
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    std::cout << "Done.\n";
    std::cin.get();
    std::cin.get();
    return 0;
}

int fill_array(double ar[], int limit) {
    double temp;
    int i;

    for (i = 0; i < limit; i++) {
        std::cout << "Enter value #" << (i + 1) << ": ";
        std::cin >> temp;

        if (!std::cin) {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; input process terminated.\n";
            break;
        } else if (temp < 0) // signal to terminate
            break;
        ar[i] = temp;
    }

    return  i;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}
// multiplies each element of ar[] by r
void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++) {
        //multiply not pointer
        ar[i] *= r;
    }
}