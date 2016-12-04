// # Reflection

// - Too trivial

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
using namespace std;
int main(){
    double mealCost, tipPercent, taxPercent;
    cin >> mealCost >> tipPercent >> taxPercent;
    int sum = mealCost + mealCost*tipPercent/100 + mealCost*taxPercent/100;
    cout << "The total meal cost is "<<sum<<" dollars.";
}

// # Improved solution
