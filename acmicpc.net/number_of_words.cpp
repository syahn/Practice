// # Reflection

// It wasy quite interesting. There are lurking conditions which one is there might
// be white space in front of sentence or in the back. If someone simply count the
// number of white space, in "b " case, it'll return 2. Also, there might be double
// space between the words. So, continued white space should be omitted. It' good practice to
// reckon the lurking conditions. It turned out I didn't need to calculate double space
// problem. I came up with pretty great idea which I can count the case "non-whitespace char" + " "
// so that I don't need to count the case with white space on the first character.
// Only thing that I additionally to do is just omitting the case in white-space on last place of
// sentence. Whoa!

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	12746	2398	1875	20.496%

// 문제
// 영어 대소문자와 띄어쓰기만으로 이루어진 문장이 주어진다. 이 문장에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 단어는 띄어쓰기 하나로 구분된다고 생각한다.
//
// 입력
// 첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문장이 주어진다. 이 문장의 길이는 1,000,000을 넘지 않는다.
//
// 출력
// 첫째 줄에 단어의 개수를 출력한다.

// # Answer

// # Initial version

#include <iostream>
#include <string>
using namespace std;

int main() {

 	string str;
 	int count=0;
  getline( cin, str );
  for (int i=0; i<str.length()-1; i++){
  	if ((int(str.at(i)) != 32) && (int(str.at(i+1)) == 32)) {
  		count++;
  	}
  }
  if (int(str.back()) == 32) count--;
  cout << count + 1 ;
	return 0;
}

// # Improved version

#include <iostream>
#include <string>
using namespace std;

int main() {

 	string str;
 	int count=0;
  getline( cin, str );
  for (int i=0; i<str.length()-1; i++){
  	if (str.at(i) != ' ' && str.at(i+1) == ' ') {
  		count++;
  	}
  }
  if (str.back() == ' ') count--;
  cout << count + 1 ;
	return 0;
}
