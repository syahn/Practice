// # Reflection

// If I can use memory without limit, it could be solved by simple trick like this.
// I was moved by the improved solution other person already made it. It's elegance!
// I declared the variables in global scope. It would be easy to solve it.

// # Problem

시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	900	731	677	81.273%

문제
총 N개의 정수가 주어졌을 때, 정수 v가 몇 개 인지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로 구분되어져있다. 셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.

출력
첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.

// # Answer

// # Initial version

#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;

int testCase, num, v;
int sum = 0;
vector<int> arr;

int main() {
    ios::sync_with_stdio(false);

    cin >> testCase;
    while(testCase--){
        cin >> num;
        arr.push_back(num);
    }
    cin >> v;
    for(int x:arr){
        if (x == v) sum++;
    }
    cout << sum;

    return 0;
}

// # Improved version

#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;

int testCase, num, v;
int sum = 0;

int main() {
    ios::sync_with_stdio(false);
    cin >> testCase;
    vector<int> arr(201);
    while(testCase--){
        cin >> num;
        arr[num+100]++;
    }
    cin >> v;
    cout << arr[v+100] << endl;
    return 0;
}
