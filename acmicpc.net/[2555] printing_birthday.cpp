// # Reflection

// Trivial practice for lambda funtion.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	3852	1506	1296	42.758%
// 문제
// 이 문제를 만든 사람의 생일을 출력하시오.
//
// 입력
// 입력 없음
//
// 출력
// 월/일 형식으로 출력하면 된다. 예를 들어, 9월 20일인 경우에는 9/20을 출력하면 된다.
// # Answer

// # Initial version

#include <iostream>
using namespace std;
int main() {
    auto print = []{
        cout << "10/14";
    };
    print();
    return 0;
}

// # Improved version
