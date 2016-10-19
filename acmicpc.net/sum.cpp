// # Reflection

// too trivial, but I couldn't come up with summation notation. And It gives huge win without looping. 

// # Problem
//
// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	7833	5628	5073	73.352%
//
// 문제
// John got a bad mark in math. The teacher gave him another task. John is to write a program which computes the sum of integers from 1 to n. If he manages to present a correct program, the bad mark will be cancelled.
//
// Write a program which:
//
// reads the number n from the standard input,
// computes the sum of integers from 1 to n,
// writes the answer to the standard output.
//
// 입력
// The first and only line of the standard input contains one integer n (1 ≤ n ≤ 10 000).
//
// 출력
// One integer is to be written to the standard output. This integer should be the sum of integers from 1 to n.

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

#include <iostream>
using namespace std;

int main() {
		int n;
		cin >> n;
    cout << n * (n+1)/2;
    return 0;
}
