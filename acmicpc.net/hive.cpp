// # Reflection

// I calculatated the sequence of number with arithmetic progression notation. But,
// I didn't need to do like that. I should have thought more simply.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	2554	1288	1093	51.242%
//
// 문제
// 위의 그림과 같이 육각형으로 이루어진 벌집이 있다.
// 그림에서 보는 바와 같이 중앙의 방 1부터 시작해서 이웃하는 방에 돌아가면서 1씩 증가하는 번호를 주소로 매길 수 있다.
// 숫자 N이 주어졌을 때, 벌집의 중앙 1에서 N번 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나가는지(시작과 끝을 포함하여)를
// 계산하는 프로그램을 작성하시오. 예를 들면, 13까지는 3개, 58까지는 5개를 지난다.
//
// 입력
// 첫째 줄에 N(1 ≤ N ≤ 1,000,000,000)이 주어진다.
//
// 출력
// 입력으로 주어진 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나는지 출력한다.

// # Answer

// # Initial version

#include <iostream>
using namespace std;

int main() {
	int num, count = 1;
	cin >> num;
	for(int i=1;  ; i++){
		if(num >= 3*i*(i - 1) + 2){
			count++;
		} else {
			break;
		}
	}
	cout << count;
  return 0;
}

// # Improved version

#include <iostream>
using namespace std;

int main() {
	int num, count, i;
	cin >> num;
	for(count=1, i=1; i < num; count++) i += 6*count;
	cout << count;
  return 0;
}
