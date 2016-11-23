// # Reflection


// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	1911	1107	892	59.506%
// 문제
// N개의 정수로 이루어진 배열 A가 주어진다. 이 때, 배열에 들어있는 정수의 순서를 적절히 바꿔서 다음 식의 최대값을 구하는 프로그램을 작성하시오.
//
// |A[0] - A[1]| + |A[1] - A[2]| + ... + |A[N-2] - A[N-1]|
//
// 입력
// 첫째 줄에 N (3 ≤ N ≤ 8)이 주어진다. 둘째 줄에는 배열 A에 들어있는 정수가 주어진다. 배열에 들어있는 정수는 -100보다 크거나 같고, 100보다 작거나 같다.
//
// 출력
// 첫째 줄에 배열에 들어있는 수의 순서를 적절히 바꿔서 얻을 수 있는 식의 최댓값을 출력한다.

// # Answer

// # Initial version
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
int main() {
   int n;
    cin >> n;
    vector<int> a(n);

    int temp=0;
    for(int j=0; j<n; ++j){
        cin >> a[j];
    }

    sort(a.begin(), a.end());

    int sum = 0;

    do {
        int temp = 0;
        for (int i=1; i<n; ++i){
            temp += abs(a[i] - a[i-1]);
        }
        if(temp > sum) sum = temp;
    } while (next_permutation(a.begin(), a.end()));

    cout << sum;

    return 0;
}


// # Improved version
