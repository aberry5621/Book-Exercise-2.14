//
//  main.cpp
//  Book Exercise 2.14
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Calculate Body Mass Index
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Calculate Body Mass Index \n";
    
    // D
    double weight_input = 0.0;
    double height_input = 0.0;
    double kg_convert = 0.0;
    double meters_convert = 0.0;

    double bmi_calc = 0.0;
    
    // I
    cout << "Enter weight in pounds: ";
    cin >> weight_input;
    
    cout << "Enter height in inches: ";
    cin >> height_input;
    
    // P

    // convert pounds to kg
    kg_convert = weight_input * 0.45359237;
    // convert inches to m
    meters_convert = height_input * 0.0254;
    
    bmi_calc = kg_convert / pow(meters_convert, 2.0);
    
    // O
    cout << "BMI is " << bmi_calc << endl;
    
    return 0;
    
}