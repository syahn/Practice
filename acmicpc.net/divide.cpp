// # Reflection
// 
// It took a while to solve this problem though it's quite simple. I thought like
// only last two digits can increase. It was fault.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	2387	1207	1063	54.879%
// 문제
// 두 정수 N과 F가 주어진다. 지민이는 정수 N의 가장 뒤 두자리를 적절히 바꿔서 N을 F로 나누어 떨어지게 만드려고 한다. 만약 가능한 것이 여러가지이면, 뒤 두자리를 가능하면 작게 만드려고 한다.
//
// 예를 들어, N=275이고, F=5이면, 답은 00이다. 200이 5로 나누어 떨어지기 때문이다. N=1021이고, F=11이면, 정답은 01인데, 1001이 11로 나누어떨어지기 때문이다.
//
// 입력
// 첫째 줄에 N과 F가 주어진다. N은 100보다 크거나 같고, 2,000,000,000보다 작거나 같은 자연수이다. F는 100보다 작거나 같은 자연수이다.
//
// 출력
// 첫째 줄에 마지막 두 자리를 모두 출력한다. 한자리이면 앞에 0을 추가해서 두 자리로 만들어야 한다.

// # Answer

// # Initial version

#include <iostream>
using namespace std;

int main() {
	int n, f;
	cin >> n >> f;
	int newNum = n/100*100 ;
	while(newNum % f) newNum++;
  cout <<(newNum / 10) % 10 << newNum % 10 << endl;
  return 0;
}

// # Improved version

#include <iostream>
using namespace std;

int main() {
	int n, f;
	cin >> n >> f;
	n = n/100*100 ;
	while(n % f) n++;
  cout <<(n / 10) % 10 << n % 10;
  return 0;
}
