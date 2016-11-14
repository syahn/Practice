// # Reflection

// This problem is to practice count method.
// It could be used to string as well as vector.

// # Problem

시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	3381	2030	1769	62.333%
문제
알파벳 소문자로만 이루어진 단어 S가 주어진다. 이 때, 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.

출력
단어에 포함되어 있는 a의 개수, b의 개수, …, z의 개수를 공백으로 구분해서 출력한다.

// # Answer

// # Initial version

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string word;
int main() {
    cin >> word;
    for(int i=0, temp='a'; i<26; ++i, ++temp){
        cout << count(word.begin(), word.end(), temp) << ' ';
    }
    return 0;
}

// # Improved version

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string word;
int main() {
    cin >> word;
    for(int i='a'; i<='z'; ++i){
        cout << count(word.begin(), word.end(), i) << ' ';
    }
    return 0;
}