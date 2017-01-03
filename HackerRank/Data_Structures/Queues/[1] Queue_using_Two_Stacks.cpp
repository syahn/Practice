// # Reflection

// - I didn't solve it by myself. I didn't consider the limitation of execution time.
//   Considering property of queue, I need not transfer all of entities from the stack
//  which play as queue everytime, but wait until all of enitities get consumed by query 2

// # Problem

// A queue is an abstract data type that maintains the order in which elements were
// added to it, allowing the oldest elements to be removed from the front and
// new elements to be added to the rear. This is called a First-In-First-Out (FIFO)
// data structure because the first element added to the queue (i.e., the one that
//     has been waiting the longest) is always the first one to be removed.
//
// A basic queue has the following operations:
//
// Enqueue: add a new element to the end of the queue.
// Dequeue: remove the element from the front of the queue and return it.
// In this challenge, you must first implement a queue using two stacks.
// Then process  queries, where each query is one of the following  types:
//
// 1 x: Enqueue element  into the end of the queue.
// 2: Dequeue the element at the front of the queue.
// 3: Print the element at the front of the queue.


// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    stack<int> stackA;
    stack<int> stackB;
    int q;
    scanf("%d", &q);
    for(int i=0; i<q; i++){
        int query;
        scanf("%d", &query);
        if(query==1){
            int val;
            scanf("%d", &val);
            stackA.push(val);
        } else {
            if(stackB.empty()){
                while(!stackA.empty()){
                    stackB.push(stackA.top());
                    stackA.pop();
                }
            }
            if(!stackB.empty()){
                if(query==2) stackB.pop();
                if(query==3) cout << stackB.top() << endl;
            }

        }

        }
    return 0;
}


// # Improved solution
