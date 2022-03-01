// Copyright (c) 2022 Mr. Riscalas All rights reserved
//
// Created By: Nicolas Riscalas
// Created On 02, 28, 2022
// Calculate the area and perimeter of a circle

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;


#define PI M_PI

int main() {
    float radius, area, perimeter;
    cout << "Enter radius of circle\n";
    cin >> radius;
    // Area of Circle = PI x Radius X Radius
    area = PI*radius*radius;
    perimeter = PI*radius*2;
    cout << "Area of circle : " << area;
    cout << "\nPerimeter of circle : " << perimeter;

    return 0;
}
