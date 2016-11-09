// # Reflection

// This problem is to practice to use while(scanf()).
// I don't know how ~scanf works.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	4557	1724	1548	41.401%
// 문제
// 두 수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//
// 입력
// 입력은 여러 개의 테스트 케이스로 이루어져 있다.
//
// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A,B < 10)
//
// 출력
// 각 테스트 케이스마다 A+B를 출력한다.

// # Answer

// # Initial version

#include <cstdio>
int main() {
    int x, y;
    while(scanf("%d %d",&x, &y)==2){
        printf("%d\n", x + y);
    }
	return 0;
}

// # Improved version
#include <cstdio>
int main() {
  int x, y;
  while(~scanf("%d %d",&x, &y)) printf("%d\n", x + y);
	return 0;
}
