// # Reflection

// - Be careful when using tenary comparison 

// # Problem

// You have three stacks of cylinders where each cylinder has the same diameter,
// but they may vary in height. You can change the height of a stack by removing
// and discarding its topmost cylinder any number of times.
//
// Find the maximum possible height of the stacks such that all of the stacks are
// exactly the same height. This means you must remove zero or more cylinders
// from the top of zero or more of the three stacks until they're all the same height,
// then print the height. The removals must be performed in such a way as to maximize the height.
//
// Note: An empty stack is still a stack.

// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

queue<int> a,b,c;
int hA, hB, hC;

void getInput(){
    int nA, nB, nC;
    cin >> nA >> nB >> nC;
    for(int i=0; i<nA; ++i){
        int temp;
        scanf("%d", &temp);
        hA += temp;
        a.push(temp);
    }
    for(int i=0; i<nB; ++i){
        int temp;
        scanf("%d", &temp);
        hB += temp;
        b.push(temp);
    }
    for(int i=0; i<nC; ++i){
        int temp;
        scanf("%d", &temp);
        hC += temp;
        c.push(temp);
    }

}

int equalStack(){

    while(hA != hB || hB != hC || hA != hC){
        long long int maxVal= hA >= hB ? hA >= hC ? hA : hC : hB >= hC ? hB : hC;
//        cout << "max: " << maxVal << endl;
        if(maxVal == hA){
            int ent = a.front();
            hA -= ent;
            if(hA == hB && hB == hC) break;
            else a.pop();

        } else if(maxVal == hB){
            int ent = b.front();
            hB -= ent;
            if(hA == hB && hB == hC) break;
            else b.pop();
        } else {
            int ent = c.front();
            hC -= ent;
            if(hA == hB && hB == hC) break;
            else c.pop();
        }
        if(!hA || !hB || !hC){
            return 0;
        }
    }
    return hA;
}


int main() {
    getInput();
    cout << equalStack() << endl;
    return 0;
}


// # Improved solution
