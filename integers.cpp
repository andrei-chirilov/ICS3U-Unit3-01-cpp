// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: September 2019
// This program calculates the total sum of two integers


#include <iostream>

int main() {
    // This function calculates the toal sum of two integers
    int Integer1;
    int Integer2;
    double total;

    // input
    std::cout << "Enter value of Integer1:";
    std::cin >> Integer1;
    std::cout << "Enter value of Integer2:";
    std::cin >> Integer2;

    // process
    total = Integer1 + Integer2;

    // output
    std::cout << "" <<std::endl;
    std::cout << "The total sum is: " << total << std::endl;
}
