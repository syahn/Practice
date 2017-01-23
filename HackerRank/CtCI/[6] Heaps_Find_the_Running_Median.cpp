// # Reflection

// - I failed to solve this at frist time.
// - For implementing heap, there are two way in STL, one is priority_queue, the other
//     is make_heap.
// - Key idea for this problem is using 2 heaps that one is min-heap, the other is
//   max-heap.
// - For printing out one decimal point, use data type coersion with printf.

// # Problem

// The median of a dataset of integers is the midpoint value of the dataset
// for which an equal number of integers are less than and greater than the value.
// To find the median, you must first sort your dataset of integers in non-decreasing order, then:
//
// If your dataset contains an odd number of elements, the median is the middle
// element of the sorted sample. In the sorted dataset ,  is the median.
// If your dataset contains an even number of elements, the median is the average
// of the two middle elements of the sorted sample. In the sorted dataset ,  is the median.
// Given an input stream of  integers, you must perform the following task for each  integer:
//
// Add the  integer to a running list of integers.
// Find the median of the updated list (i.e., for the first element through the  element).
// Print the list's updated median on a new line. The printed value must be a
// double-precision number scaled to decimal place (i.e.,  format).

// # Brute force

int main(){
    int n,
        count = 0;
    cin >> n;
    vector<double> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       scanf("%lf", &a[a_i]);
       count++;
       sort(a.begin(), a.begin() + count);
       if(count % 2 == 0){
           int firstIdx = count / 2 - 1,
               secondIdx = firstIdx + 1;
           printf("%.1lf\n", (a[firstIdx] + a[secondIdx]) / 2);
       } else {
           printf("%.1lf\n", a[count / 2]);
       }
    }
    return 0;
}


// # Improved solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main(){
    int n,
        count = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> higher;
    priority_queue<int> lower;

    for(int a_i = 0;a_i < n;a_i++){
       int temp;
       scanf("%d", &temp);
       if(count++==0) lower.push(temp);

       else{
         if(lower.size() > higher.size()){
           if(temp < lower.top()){
             higher.push(lower.top());
             lower.pop();
             lower.push(temp);
           } else {
               higher.push(temp);
           }
        } else {
           if(temp <= higher.top()){
              lower.push(temp);
           } else {
             lower.push(higher.top());
             higher.pop();
             higher.push(temp);
           }
         }
       }
      if(count % 2 == 0){
        printf("%.1lf\n", (lower.top() + higher.top()) / 2.0);
      } else {
        printf("%.1lf\n", lower.top() / 1.0);
      }
    }


    return 0;
}
