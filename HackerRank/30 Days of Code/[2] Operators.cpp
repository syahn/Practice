// # Reflection

// - trivial, but good for practice rounding off to nearest integer.
// - floor + 0.5 is great solution for rounding to nearest integer.

// # Problem

// Objective
// In this challenge, you'll work with arithmetic operators. Check out the Tutorial
// tab for learning materials and an instructional video!
//
// Task
// Given the meal price (base cost of a meal), tip percent (the percentage of the meal
// price being added as tip), and tax percent (the percentage of the meal price being
// added as tax) for a meal, find and print the meal's total cost.




// # Initial solution

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double mealCost, tipPercent, taxPercent;
    cin >> mealCost >> tipPercent >> taxPercent;
    int sum = floor(mealCost + mealCost*tipPercent/100 + mealCost*taxPercent/100 + 0.5);
    cout << "The total meal cost is "<< sum <<" dollars.";
}

// # Improved solution
