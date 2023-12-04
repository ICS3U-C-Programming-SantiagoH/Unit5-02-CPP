// Copyright (c) 2023 Santiago Hewett All rights reserved.
// Created by: Santiago Hewett
// Date: Nov 28, 2023
// This program will ask the user for the base and
// height of a triangle and display the area using multiple functions

#include <iostream>
#include <string>

void calc_area_triangle(float base, float height) {
    // Calculate the area
    float area = (base * height) / 2;

    // Display area back to the user
    std::cout << "\n"
              << base << "cm x " << height << "cm = " << area << "cm^2";
}

int main() {
    // Declare variables as strings and floats
    std::string userBaseStr;
    std::string userHeightStr;
    float userBaseFloat;
    float userHeightFloat;

    // Get base and height from the user and display a message
    std::cout << "This program will ask the user for the base and\n";
    std::cout << "height of a triangle and display the area.\n";
    std::cout << "Please enter the base in cm: ";
    std::cin >> userBaseStr;
    std::cout << "Please enter the height in cm: ";
    std::cin >> userHeightStr;

    // Catch if the user entered a string
    try {
        // Convert base as a string to float
        userBaseFloat = std::stof(userBaseStr);

        // Convert height as a string to float
        userHeightFloat = std::stof(userHeightStr);

        // Call the calc_area_triangle function
        calc_area_triangle(userBaseFloat, userHeightFloat);
    } catch (std::invalid_argument& e) {
        // Message for an invalid user number
        std::cout << "\n"
                  << userBaseStr << " and " << userHeightStr
                  << " are not valid base and height.\n";
    }
}
