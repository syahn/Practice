// # Reflection

// - Too obvious to recognizing that I should use min-heap

// # Problem

// Jesse loves cookies. He wants the sweetness of all his cookies to be greater than value .
// To do this, Jesse repeatedly mixes two cookies with the least sweetness.
// He creates a special combined cookie with:
//
// sweetness  Least sweet cookie   2nd least sweet cookie).
//
// He repeats this procedure until all the cookies in his collection have a sweetness .
// You are given Jesse's cookies. Print the number of operations required to give the cookies a sweetness .
// Print  if this isn't possible.


// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

priority_queue<int> pq;

int main() {
    int N,
        K,
        count=0;
    cin >> N >> K;
    for(int i=0; i<N; i++){
        int temp;
        scanf("%d", &temp);
        pq.push(-1 * temp);
    }
    while(-1 * pq.top() < K){
        int least = pq.top();
        pq.pop();
        if(pq.empty()){
            count = -1;
            break;
        }
        int leastSecond = pq.top();
        pq.pop();
        int newVal =(least + 2 * leastSecond);
        pq.push(newVal);
        count++;
    }
    cout << count << '\n';
    return 0;
}



// # Improved solution
