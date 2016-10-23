// # Reflection

// Before solving this problem, I didn't know how to print out ascii code easily. 
// I've learned it and about getchar() too.

// # Problem

// 문제집
// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	2369	1981	1838	86.210%
//
// 문제
// 알파벳 소문자, 대문자, 숫자 0-9중 하나가 주어졌을 때, 주어진 글자의 아스키 코드값을 출력하는 프로그램을 작성하시오.
//
// 입력
// 알파벳 소문자, 대문자 숫자 0-9 중 하나가 첫째 줄에 주어진다.
//
// 출력
// 입력으로 주어진 글자의 아스키 코드 값을 출력한다.

// # Answer

// # Initial version

#include <iostream>

using namespace std;

int main() {
        char v;
        cin >> v;
    cout << int(v);
}

// # Improved version

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	cout << getchar();
}
