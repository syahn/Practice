// # Reflection

// First solution was quite redundant. I got bug when I tried to compare string.at() with "string",
// it returns error telling me int and pointer could not be compared. Without solving this,
// I just make additional string variable to contain each character of test case.
// After solving it, with few searches, I found out there's difference between '' and "" in
// specifying char constants. Also, ternary operation gives simpleness to the code.
// I'll try to come up with application of ternary operation whenever I first see the code.


// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	2776	1593	1458	61.467%
//
// 문제
// "OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
//
// "OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
//
// OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.
//
// 출력
// 각 테스트 케이스마다 점수를 출력한다.

// # Answer

// # Initial version

#include <iostream>
#include <string>
using namespace std;

int main() {
    int test, digit, score, sum=0;
    string entity;
    string testCase;

    bool wasOne = false;
    cin >> test;

    for (int i=0; i<test; i++){
        cin >> testCase;
        sum = 0;
        score = 0;

        for(int j=0; j<testCase.length(); j++){
            entity = testCase.at(j);

            if((entity == "O") && wasOne){
                score = 1 + score;

            } else if(entity == "O") {
                wasOne = true;
                score += 1;

            } else {
                wasOne = false;
                score = 0;
            }
            sum += score;
        }
        cout << sum << "\n";
    }

    return 0;
}

// # Improved version

#include <iostream>
#include <string>
using namespace std;

int main() {
	int test;
	string testCase;

	bool wasOne = false;
	cin >> test;

	for (int i=0; i<test; i++){
		cin >> testCase;
		int sum = 0, score = 0;
		for(int j=0; j<testCase.length(); j++){
			testCase[j] == 'O' ? sum += ++score : score = 0;
		}
		cout << sum << "\n";
	}

	return 0;
}
