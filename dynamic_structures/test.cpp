//
// Created by Ovidiu on 3/31/22.
//

#include <iostream>

struct inflatable {
    char name[17];
};

int main() {
    inflatable f = {"dsfsdf"};
    inflatable * ps ;
    ps = &f;

    std::cout << f.name;
    std::cout << ps->name;


    return 0;
}

