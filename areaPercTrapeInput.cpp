// Copyright (c) 2026 Adrian Student All rights reserved.
// .
// Created by: Adrian student
// Date: Oct 10th, 2026
// This program asks the user for the top base , bottom base ,
// left leg, right leg and height of a trapezium and then
// calculates its area and perimeter.
#include <iostream>
#include <iomanip>
#include <string>


int main() {
    // declare variables
    int topBase, bottomBase, height, leftLeg, rightLeg, perimeter;
    float area;
    std::string unit;

    // get the unit of measurement
    std::cout << "Enter the unit of measurement (m , mm or cm) :";
    std::cin >> unit;


    // get the top base value
    std::cout << "Enter the top base value ("<< unit <<"): ";
    std::cin >> topBase;


    // get the bottom base value
    std::cout << "Enter the bottom base value (" << unit << "): ";
    std::cin >> bottomBase;


    // get the right leg value
    std::cout << "Enter the right leg value (" << unit << ") :";
    std::cin >> rightLeg;


    // get the left leg value
    std::cout << "Enter the left leg value (" << unit << ") :";
    std::cin >> leftLeg;


    // get the height
    std::cout << "Enter the height (" << unit << ") :";
    std::cin >> height;


    // calculate the perimeter
    perimeter = topBase + bottomBase + rightLeg + leftLeg;


    // calculate the area
    float area = 0.5 * (topBase + bottomBase) * height;


    // Display the perimeter of the trapezium
    std::cout << "\n";
    std::cout << "The perimeter is : " << perimeter << unit << std::endl;


    // Display the area of the trapezium
    std::cout << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The area is : " << area << unit << "²" << std::endl;
}
