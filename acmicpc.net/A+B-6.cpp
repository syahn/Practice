// # Reflection

// Too easy

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	2455	1630	1496	67.570%
// 문제
// 두 수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
//
// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. A와 B는 콤마(,)로 구분되어 있다. (0 < A,B < 10)
//
// 출력
// 각 테스트 케이스마다 A+B를 출력한다.

// # Answer

// # Initial version

#include <iostream>

using namespace std;

int A, B;
int num;

int main() {
    cin >> num;
    while(num--){
        scanf("%d,%d", &A, &B);
        cout << A+B << "\n";
    }
    return 0;
}

// # Improved version
