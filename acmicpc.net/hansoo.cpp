// # Reflection

// A lot of people solved this problem without resorting to build another function.
// In my opinion, increasing modularity is more important because it can make us to
// debug the code easily. And readability is also important too.


// # Problem
//
// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	2204	1085	996	51.367%
// 문제
// 어떤 양의 정수 X의 자리수가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의
// 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를
// 출력하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.
//
// 출력
// 첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.

// # Answer

// # Initial version

#include <iostream>
using namespace std;

bool hanSoo(int num){
	int n1, n2, n3;
	n1 = num % 10;
	n2 = (num / 10) % 10;
	n3 = num / 100;
	return (n1 - n2) == (n2 - n3);
}

int main() {

		int num;
		int count = 0;
		cin >> num;

		for(int i=1; i<=num; i++){
			if((i / 10) < 10){
				count++;
			} else if(hanSoo(i)){
				count++;
			}
		}
    cout << count;
}


// # Improved version

#include <iostream>
using namespace std;

bool isHanSoo(int num){
	int n1, n2, n3;
	if (num < 100) return 1;
	else {
		n1 = num % 10;
		n2 = (num / 10) % 10;
		n3 = num / 100;
		return (n1 - n2) == (n2 - n3);
	}

}

int main() {

		int num;
		int count = 0;
		cin >> num;

		for(int i=1; i<=num; i++){
			if(isHanSoo(i)){
				count++;
			}
		}
    cout << count;
}
