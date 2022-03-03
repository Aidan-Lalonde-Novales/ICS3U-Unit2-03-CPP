// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved
//
// Created by Aidan Lalonde-Novales
// Created on 2022-03-02
// This is a program that calculates the circumference
// of a circle using user input and a constant

#include <iostream>

int main() {
  // function that calculates area and perimeter
  const double TAU = 6.28;
  int radius;
  double circumference;

  // input
  std::cout << "Enter the circumference of the circle (mm): ";
  std::cin >> radius;

  // process
  circumference = TAU*radius;

  // output
  std::cout << std::endl;
  std::cout << "Circumference is " << circumference << " mm." << std::endl;
}
