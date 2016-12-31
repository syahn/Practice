// # Reflection

// - There is swap method

// # Problem

// Objective 
// Today, we're discussing a simple sorting algorithm called Bubble Sort.
// Check out the Tutorial tab for learning materials and an instructional video!
//
// Consider the following version of Bubble Sort:
//
// for (int i = 0; i < n; i++) {
//     // Track number of elements swapped during a single array traversal
//     int numberOfSwaps = 0;
//
//     for (int j = 0; j < n - 1; j++) {
//         // Swap adjacent elements if they are in decreasing order
//         if (a[j] > a[j + 1]) {
//             swap(a[j], a[j + 1]);
//             numberOfSwaps++;
//         }
//     }
//
//     // If no elements were swapped during a traversal, array is sorted
//     if (numberOfSwaps == 0) {
//         break;
//     }
// }
// Task
// Given an array, , of size  containing distinct elements , sort array
// in ascending order using the Bubble Sort algorithm above. Once sorted, print the following lines:
//
//
// where  is the number of swaps that took place.
//
// where  is the first element in the sorted array.
//
// where  is the last element in the sorted array.

// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> arr;

void bubbleSort(int &numSwaps, int len){
    for(int i=0; i<len; ++i){
        int numOfSwaps = 0;
        for(int j=0; j<len-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                numOfSwaps++;
            }
        }
        numSwaps += numOfSwaps;

        if(numOfSwaps == 0){
            break;
        }
    }
}

int main() {
    int n;
    int numSwaps=0;
    cin >> n;
    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    bubbleSort(numSwaps, n);

    cout << "Array is sorted in " << numSwaps << " swaps." << "\n";
    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << *arr.rbegin();

    return 0;
}


// # Improved solution
