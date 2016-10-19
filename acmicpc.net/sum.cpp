// # Reflection

// too trivial, but It should be better algorithm for summation.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	7833	5628	5073	73.352%
// 문제
// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.
//
// 출력
// 1부터 n까지 합을 출력한다.

// # Answer

// # Initial version

#include <iostream>
using namespace std;

int main() {
		int num, sum=0;
		cin >> num;

		for (int i=1; i<=num; i++){
			sum += i;
		}
    cout << sum;

    return 0;
}

// # Improved version
