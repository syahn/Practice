// # Reflection

// This problem is to practice utilizing string and type conversion. 


// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	2234	761	659	34.960%
// 문제
// 네 자연수 A, B, C, D가 주어진다. 이 때, A와 B를 붙인 수와 C와 D를 붙인 수의 합을 구하는 프로그램을 작성하시오.
//
// 두 수를 A와 B를 합치는 것은 A의 뒤에 B를 붙이는 것을 의미한다. 즉, 20과 30을 붙이면 2030이 된다.
//
// 입력
// 첫째 줄에 네 자연수 A, B, C, D가 주어진다. (1 ≤ A, B, C, D ≤ 1,000,000)
//
// 출력
// A와 B를 붙인 수와 C와 D를 붙인 수의 합을 출력한다.


// # Answer

// # Initial version

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main() {
    int a, b, c, d;
    string A, B;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    A = to_string(a)+to_string(b);
    B = to_string(c)+to_string(d);
    cout << stoll(A) + stoll(B) << endl;
    return 0;
}

// # Improved version
