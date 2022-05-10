//
// Created by Ovidiu on 5/9/22.
//

#include <iostream>

const int LENGTH = 66;
const int DIVISIONS = 6;

void subdivide(char array[], int low, int high, int level);

int main() {
    char ruler[LENGTH];
    int i;

    for (i = 1; i < LENGTH - 2; i++) {
        ruler[i] = ' ';
    }

    ruler[LENGTH - 1] = '\0';
    int min = 0;
    int max = LENGTH - 2;

    ruler[min] = ruler[max] = '|';

    std::cout << ruler << std::endl;

    for (i = 1; i <= DIVISIONS; i++)
    {
        subdivide(ruler,min,max, i);
        std::cout << ruler << std::endl;
        for (int j = 1; j < LENGTH - 2; j++)
            ruler[j] = ' '; // reset to blank ruler
    }

//    for (i = 0; i <= max; i++) {
//        std::cout << ruler[i];
//    }


    return 0;
}

void subdivide(char ar[], int low, int high, int level)
{
    if (level == 0)
        return;
    int mid = (high + low) / 2;

    ar[mid] = '|';
    subdivide(ar, low, mid, level - 1);
    subdivide(ar, mid, high, level - 1);
}