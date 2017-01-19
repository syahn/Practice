// # Reflection

// - It's second time to solve this problem. But I couldn't solve it at a time.
//   Because I didn't take account into time limit, so it couldn't pass it.
// - Now, I'm confident to handle this kinds of tests.
// - Linking two stacks can be used to make queue.

// # Problem

// A queue is an abstract data type that maintains the order in which elements were
// added to it, allowing the oldest elements to be removed from the front and new
// elements to be added to the rear. This is called a First-In-First-Out (FIFO)
// data structure because the first element added to the queue
// (i.e., the one that has been waiting the longest) is always the first one to be removed.
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
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {

    public:
        stack<int> stackNew, stackOld;

        void push(int x) {
            stackNew.push(x);
        }

        void pop() {
            if(stackNew.empty()) return ;
            while(true){
                int topVar = stackNew.top();
                stackOld.push(topVar);
                stackNew.pop();
                if(stackNew.empty()){
                    stackOld.pop();
                    while(!stackOld.empty()){
                        int topVar = stackOld.top();
                        stackNew.push(topVar);
                    }
                    break;
                }
            }
        }

        int front() {
            if(stackNew.empty()) {
                return 0;
            }
            while(true){
                int topVar = stackNew.top();
                stackOld.push(topVar);
                stackNew.pop();
                if (stackNew.empty()){
                    while(true){
                        int topVar = stackOld.top();
                        stackNew.push(topVar);
                        stackOld.pop();
                        if(stackOld.empty()) break;
                    }
                    return topVar;
                }
            }
        }
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;

    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }

    return 0;
}



// # Improved solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {

    public:
        stack<int> stackNew, stackOld;

        void push(int x) {
            stackNew.push(x);
        }

        void pop() {
            if(!stackOld.empty()){
                stackOld.pop();
            } else {
                while(!stackNew.empty()){
                    int topVar = stackNew.top();
                    stackOld.push(topVar);
                    stackNew.pop();
                }
                stackOld.pop();
            }
        }

        int front() {
            if(!stackOld.empty()){
                return stackOld.top();
            } else {
                while(!stackNew.empty()){
                   int topVar = stackNew.top();
                   stackOld.push(topVar);
                   stackNew.pop();
                }
                return stackOld.top();
            }
        }
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;

    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }

    return 0;
}
