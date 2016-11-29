// # Reflection

// - when I insert value to set, it automatically sorted since it's BST.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	1403	699	592	52.021%
// 문제
// N개의 정수가 주어진다. 이 때, N개의 정수를 오름차순으로 정렬하는 프로그램을 작성하시오. 같은 정수는 한 번만 출력한다.
//
// 입력
// 첫째 줄에 수의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째에는 숫자가 주어진다. 이 수는 절대값이 1,000보다 작거나 같은 정수이다.
//
// 출력
// 첫째 줄에 수를 오름차순으로 정렬한 결과를 출력한다. 이 때, 같은 수는 한 번만 출력한다.

// # Answer

// # Initial version

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;
set<int> s;
vector<int> v;

int main(){
    int n, temp;
    cin >> n;

    while(n--){
        cin >> temp;
        s.insert(temp);
    }
    int range = s.size();
    for(int i=0; i<range; ++i){
        auto it = s.begin();
        v.push_back(*it);
        s.erase(it);
    }

    for(int x:v){
        cout << x << ' ';
    }

}

// # Improved version

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
set<int> s;
int main(){
    int n, temp;
    cin >> n;
    while(n--){
        cin >> temp;
        s.insert(temp);
    }
    for(int x:s){
        cout << x << ' ';
    }
    return 0;
}
