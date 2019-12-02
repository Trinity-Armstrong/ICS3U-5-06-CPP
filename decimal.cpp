// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: December 2019
// This program rounds decimal places

#include <iostream>
#include <iomanip>
#include <cmath>

float Rounding(float &number, float decimalPoint) {
    // This function rounds the inputted number

    // Variables
    float roundedNumber;

    // Process
    roundedNumber = number*pow(10, decimalPoint);
    roundedNumber = roundedNumber + 0.5;
    roundedNumber = static_cast<int>(roundedNumber);
    roundedNumber = roundedNumber/pow(10, decimalPoint);

    return roundedNumber;
}

int main() {
    // This function takes the inputted number then outputs the number rounded

    // Variables
    std::string userNumberAsString;
    std::string decimalPlaceAsString;
    float userRoundedNumber;
    float userNumber;
    int decimalPlace;

    // Input
    while (true) {
        std::cout << "Enter a number to be rounded: " << std::endl;
        std::cin >> userNumberAsString;
        std::cout << "Enter the how many decimal places you want: " \
        << std::endl;
        std::cin >> decimalPlaceAsString;
        std::cout << "" << std::endl;

        try {
            userNumber = std::stof(userNumberAsString);
            decimalPlace = std::stoi(decimalPlaceAsString);
            if (userNumber == std::stof(userNumberAsString) && \
                decimalPlace == std::stoi(decimalPlaceAsString)) {
                    userRoundedNumber = Rounding(userNumber, decimalPlace);
                    std::cout << "" << std::endl;
                    std::cout << "Your rounded number is " \
                    << userRoundedNumber << std::endl;
                    break;
                } else {
                    std::cout << "Error! Try again." << std::endl;
                }
        } catch (std::invalid_argument) {
            std::cout << "Error! Try again." << std::endl;
            std::cout << "" << std::endl;
        }
    }
}
