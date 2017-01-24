// # Reflection

// - There is way to optimize the bubble sort by decrementing last element index by one.
//   Because one iteration put the biggest element at the right end.

// # Problem

// Given an -element array, , of distinct elements, sort array  in ascending order
// using the Bubble Sort algorithm above. Once sorted, print the following three lines:
//
// Array is sorted in numSwaps swaps., where  is the number of swaps that took place.
// First Element: firstElement, where  is the first element in the sorted array.
// Last Element: lastElement, where  is the last element in the sorted array.
// Hint: To complete this challenge, you must add a variable that keeps a running
// tally of all swaps that occur during execution.



// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(vector<int>& a, int n){
  int sumOfSwaps = 0;
  for (int i=0; i < n; i++){
    int numberOfSwaps = 0;

    for(int j=0; j < n-1; j++){
      if(a[j] > a[j+1]) {
        swap(a[j] , a[j+1]);
        numberOfSwaps++;
      }
    }
    lastElm--;
    sumOfSwaps += numberOfSwaps;
    if(numberOfSwaps == 0){
      cout << "Array is sorted in " << sumOfSwaps <<" swaps.\n";
      break;
    }
  }
}


int main() {
   int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    BubbleSort(a, n);
    cout << "First Element: " << a.front() << '\n' << "Last Element: " << a.back();

  return 0;
}



// # Improved solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(vector<int>& a, int n){
  int sumOfSwaps = 0;
  int lastElm = n - 1;
  for (int i=0; i < n; i++){
    int numberOfSwaps = 0;

    for(int j=0; j < lastElm; j++){
      if(a[j] > a[j+1]) {
        swap(a[j] , a[j+1]);
        numberOfSwaps++;
      }
    }
    lastElm--;
    sumOfSwaps += numberOfSwaps;
    if(numberOfSwaps == 0){
      cout << "Array is sorted in " << sumOfSwaps <<" swaps.\n";
      break;
    }
  }
}


int main() {
   int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    BubbleSort(a, n);
    cout << "First Element: " << a.front() << '\n' << "Last Element: " << a.back();

  return 0;
}
