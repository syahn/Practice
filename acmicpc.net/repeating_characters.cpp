// # Reflection

// It's hard to find more optimized way. If I sacrifice the readability of the code,
// I might reduce the length of code, there's no point of doing it.


// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	2030	1186	1106	61.719%

// 문제
// For this problem, you will write a program that takes a string of characters, S, and
// creates a new string of characters, T, with each character repeated R times.
// That is, R copies of the first character of S, followed by R copies of the second character of S,
// and so on. Valid characters for S are the QR Code "alphanumeric" characters:
//
// 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%*+-./:
//
// 입력
// The first line of input contains a single integer P, ( 1 ≤ P ≤ 1000), which is
// the number of data sets that follow. Each data set is a single line of input
// consisting of the data set number N, followed by a space, followed by the repeat count R,
// ( 1 ≤ R ≤ 8), followed by a space, followed by the string S.
// The length of string S will always be at least one and no more than 20 characters.
// All the characters will be from the set of characters shown above.
//
// 출력
// For each data set there is one line of output. It contains the data set number, N, followed by a single space which is then followed by the new string T, which is made of each character in S repeated R times.


// # Answer

// # Initial version

#include <iostream>
#include <string>
using namespace std;

int main() {
	int testCase, numOfRep;
	string str, newStr;

	cin >> testCase;
	for (int i=0; i<testCase; i++){
		cin >> numOfRep >> str;
		for (int j=0; j<str.length(); j++){
			newStr += string(numOfRep, str[j]);
		}
		cout << newStr << "\n";
		newStr.clear();
	}

	return 0;
}

// # Improved version

#include <iostream>
#include <string>
using namespace std;

int main() {
	int testCase, numOfRep;
	string str, newStr;

	cin >> testCase;
	while (testCase--){
		cin >> numOfRep >> str;
		for (int j=0; j<str.length(); j++){
			newStr += string(numOfRep, str[j]);
		}
		cout << newStr << "\n";
		newStr.clear();
	}

	return 0;
}
