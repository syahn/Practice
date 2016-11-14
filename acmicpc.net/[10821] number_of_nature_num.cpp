// # Reflection

// trivial problem

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	768	605	560	81.159%
// 문제
// 숫자와 콤마로만 이루어진 문자열 S가 주어진다. 이 때, S에 포함되어있는 정수의 개수를 구하는 프로그램을 작성하시오.
//
// S의 첫 문자와 마지막 문자는 항상 숫자이고, 콤마는 연속해서 주어지지 않는다. 또, 0으로 시작하는 정수는 주어지지 않는다.
//
// 입력
// 첫째 줄에 문자열 S가 주어진다. S의 길이는 최대 100이다.
//
// 출력
// 문자열 S에 포함되어 있는 정수의 개수를 출력한다.

// # Answer

// # Initial version
#include <iostream>
#include <string>
using namespace std;
string str;
int count;
int main() {
	cin >> str;
	for(int i=0; i<str.size(); ++i){
		if(str[i] == ',') count++;
	}
    cout << count + 1;
    return 0;
}

// # Improved version

#include<cstdio>
int r=1;
char c;
int main() {
    while (~scanf("%c", &c)) r += c == ',';
    printf("%d", r);
    return 0;
}
