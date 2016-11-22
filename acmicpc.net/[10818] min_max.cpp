// # Reflection

// This problem is to practice to use min/max & min_element & minmax_element().

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	2597	1509	1257	62.074%
// 문제
// N개의 정수가 주어진다. 이 때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.
//
// 출력
// 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
// # Answer

// # Initial version

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int temp;
    for(int i=0; i<n; ++i){
        scanf("%d", &temp);
        a[i] = temp;
    }
    auto it = min_element(a.begin(), a.end());
    cout << *it ;
    it = max_element(a.begin(), a.end());
    cout << " " << *it;
    return 0;
}

// # Improved version

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int main() {
    int n, temp;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i){
        scanf("%d", &temp);
        a[i] = temp;
    }
    auto it = minmax_element(a.begin(), a.end());
    cout << *it.first<< ' ' << *it.second;
    return 0;
}
