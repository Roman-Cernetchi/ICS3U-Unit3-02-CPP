// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: November 2020
// This program checks if a person chose the right number between 0 and 9

#include <iostream>
#include <cmath>


int main() {
    // this function checks if the right number was chosen
    const int SECRET_NUMBER = 5;
    int chosen_number;

    // input
    std::cout << "Enter the number between 0 and 9: ";
    std::cin >> chosen_number;
    std::cout << "" << std::endl;

    // process
    if (chosen_number > SECRET_NUMBER) {
            // output
            std::cout << "Too high!";
    }

    if (chosen_number < SECRET_NUMBER) {
            // output
            std::cout << "Too low!";
    }

    if (chosen_number == SECRET_NUMBER) {
            // output
            std::cout << "Correct!";
    }
}
