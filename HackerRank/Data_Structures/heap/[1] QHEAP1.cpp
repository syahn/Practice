// # Reflection

// - I could learn how to make array or vector to heap with std::make_heap, push_heap,
//   pop_heap.

// # Problem

// This question is designed to help you get a better understanding of basic heap operations.
// You will be given queries of  types:
//
// " " - Add an element  to the heap.
// " " - Delete the element  from the heap.
// "" - Print the minimum of all the elements in the heap.
// NOTE: It is guaranteed that the element to be deleted will be there in the heap.
// Also, at any instant, only distinct elements will be in the heap.

// # Initial solution

// It didn't pass on all cases because of timeout.
#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq, pq_temp;

int main() {
    int n;
    cin >> n;
    while(n--){
        int query, val;
        scanf("%d", &query);

        switch(query){
            case 1:
                scanf("%d", &val);
                pq.push(val);
                break;
            case 2:
                scanf("%d", &val);
                if(pq.empty()) continue;
                while(pq.top() != val){
                    int f = pq.top();
                    pq.pop();
                    pq_temp.push(f);
                }
                if(pq.empty()) continue;
                else pq.pop();
                while(!pq_temp.empty()){
                    int f = pq_temp.top();
                    pq_temp.pop();
                    pq.push(f);
                }
                break;
            case 3:
                cout << pq.top() << endl;
                break;
        }
    }
    return 0;
}


// # Improved solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> pq;

int main() {
    int n;
    scanf("%d", &n);
    while(n--){
        int query, val;
        scanf("%d", &query);
        if(query == 1){
            scanf("%d", &val);
            pq.push_back(-1 * val);
            push_heap(pq.begin(), pq.end());
        } else if(query ==2){
            scanf("%d", &val);
            bool flag = false;
            for(int i = 0; i < pq.size(); i++){
                if(pq[i] == -1 * val){
                    if(pq.front() == -1* val)
                        flag = true;
                    pq.erase(pq.begin() + i);
                    break;
                }
            }
            if(flag){
                make_heap(pq.begin(), pq.end());
            }


        } else {
            cout << -1 * pq.front() << endl;
        }
    }
    return 0;
}
