//
// Created by Ovidiu on 5/5/22.
//
// strctfun.cpp -- functions with a structure argument
#include <iostream>
#include <cmath>
// structure declarations
struct polar
{
    double distance; // distance from origin
    double angle; // direction from origin
};

struct rect
{
    double x; // horizontal distance from origin
    double y; // vertical distance from origin
};

// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main() {

    rect rplace{};
    polar pplace{};

    std::cout << "Enter the x and y values: ";
    while (std::cin >> rplace.x >> rplace.y) // slick use of cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        std::cout << "Next two numbers (q to quit): ";
    }
    std::cout << "Done.\n";
    return 0;
}

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
    polar answer{};
    answer.distance = sqrt( xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer; // returns a polar structure
}
// show polar coordinates, converting angle to degrees
void show_polar (polar dapos)
{
    const double RAD_TO_DEG = 57.29577951;
    std::cout << "distance = " << dapos.distance;
    std::cout << ", angle = " << dapos.angle * RAD_TO_DEG;
    std::cout << " degrees\n";
}

