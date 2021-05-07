// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Fri/May7/2021
// This program is grandmother age checker

#include <iostream>

int main() {
    // this function checks if the age is accepted or not
    std::string ageString;
    int ageNumber;

    // input
    std::cout << "\nplease enter your age:" << std::endl;
    std::cin >> ageString;

    // process & output
    try {
        ageNumber = std::stoi(ageString);
        if (ageNumber >= 25 && ageNumber <= 40) {
            std::cout << "your accepted to date my grandchild." << std::endl;
        } else if (ageNumber > 40) {
            std::cout << "You are too old!" << std::endl;
        } else {
            std::cout <<
            "you are too young, come back later when you are older"
            << std::endl;
        }
    } catch (std::invalid_argument) {
       std::cout << ageString << ",is not vaild input.";
    }
std::cout << "Done." << std::endl;
}
