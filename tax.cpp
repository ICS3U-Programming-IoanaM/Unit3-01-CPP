// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu
//
// Date: Oct. 6, 2022
// calculates the tax of New Brunswick

#include <iomanip>
#include <iostream>

int main() {
    // constants
    double HST = 0.15;

    // variables
    float subtotal, tax, total;

    // getting user input for subtotal
    std::cout << "Enter subtotal ($ CAD): ";
    std::cin >> subtotal;

    // calculations
    tax = subtotal * HST;
    total = subtotal + tax;

    // displays results
    std::cout << "Your total cost is $" << std::fixed << std::setprecision(2)
              << std::setfill('0') << total << std::endl;
}
