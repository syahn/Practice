// # Reflection

// - When finding maximum value, use max() instead of if statement.
// - At first, I solved this with naive approach with O(n^2) time complexity.
//   And there is stack property that I didn't know before I solve this problem.
// while x < stack.top(){
//     stack.pop();
// }
// stack.push(x);
//
// After this codes, when the first pop() happens, x is first smaller value to the right,
// and after execution of codes, I could get first smaller value to the left.


// # Problem

// There are  buildings in a certain two-dimensional landscape.
// Each building has a height given by . If you join  adjacent buildings,
// they will form a solid rectangle of area .
//
// Given  buildings, find the greatest such solid area formed by consecutive buildings.

// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> building;
int maxHeight=0;
int n;

void input(){

    cin >> n;
    building.resize(n);
    for(int i=0; i<n; ++i){
        int temp;
        scanf("%d", &building[i]);
    }
}

int findMax(){
    for(int i=0; i<n; ++i){
        int buildingCount = 1;
        for(int j=i+1; j<n; ++j){
            if(building[j] >= building[i]){
                buildingCount++;
            } else break;
        }
        for(int k=i-1; k>-1; --k){
            if(building[k] >= building[i]){
                buildingCount++;
            } else break;
        }
        if(maxHeight < buildingCount * building[i]) {
            maxHeight=buildingCount * building[i];
        }
    }
    return maxHeight;
}

int main() {
    input();
    cout << findMax() << endl;
    return 0;
}


// # Improved solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> height;
vector<int> s;

int maxHeight=0;

void input(){
    int n;
    cin >> n;
    height.assign(n, 0);
    for(int i=0; i<n; ++i) scanf("%d", &height[i]);
}

int findMax(){
    height.push_back(0);
    for(int i=0; i<height.size(); ){
        if(s.empty() || height[i] > height[s.back()]){
            s.push_back(i);
            i++;
        } else {
            int top = s.back();
            s.pop_back();
            maxHeight = max(maxHeight, height[top] * (s.empty() ? i : i - s.back() - 1));
        }
    }
    return maxHeight;
}

int main() {
    input();
    cout << findMax() << endl;

    return 0;
}
