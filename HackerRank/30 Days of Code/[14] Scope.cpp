// # Reflection

// - There is convenient method for calculating max and min in the vector

// # Problem

// Objective
// Today we're discussing scope. Check out the Tutorial tab for learning materials
// and an instructional video!
//
// The absolute difference between two integers,  and , is written as .
// The maximum absolute difference between two integers in a set of positive integers,
// , is the largest absolute difference between any two integers in .
//
// The Difference class is started for you in the editor. It has a private integer
// array () for storing  non-negative integers, and a public integer () for storing the maximum absolute difference.
//
// Task
// Complete the Difference class by writing the following:
//
// A class constructor that takes an array of integers as a parameter and saves it to the  instance variable.
// A computeDifference method that finds the maximum absolute difference between
// any  numbers in  and stores it in the  instance variable.



// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;

    Difference(vector<int> &arr){
        elements = arr;
    }

    void computeDifference(){
        int len = elements.size();
        int temp, max = 0;
        for(int i=0; i<len;  i++){
            for(int j=0; j<len; j++){
                temp = abs(elements[i] - elements[j]);
                if(maximumDifference < temp)
                    maximumDifference = temp;
            }
        }
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}

// # Improved solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;

    Difference(vector<int> &arr){
        elements = arr;
    }

    void computeDifference(){
        int maxNum = *max_element(elements.begin(), elements.end());
        int minNum = *min_element(elements.begin(), elements.end());
        maximumDifference = maxNum-minNum;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
