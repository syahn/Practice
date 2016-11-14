// # Reflection

// This problem is to practice to use .size()

// # Problem
// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	2520	1877	1613	78.225%
// 문제
// 알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.
//
// 출력
// 첫째 줄에 입력으로 주어진 단어의 길이를 출력한다.

// # Answer

// # Initial version

#include <iostream>
#include <string>
using namespace std;
string s;
int main() {
    cin >> s;
    cout << s.size();
    return 0;
}

// # Improved version
