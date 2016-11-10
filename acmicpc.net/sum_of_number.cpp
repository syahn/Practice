
// # Reflection

// This problem is to practice to specify the number of input using "%[number]d"

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	2532	1371	1237	58.048%
// 문제
// N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.
//
// 출력
// 입력으로 주어진 숫자 N개의 합을 출력한다.

// # Answer

// # Initial version


// # Improved version

#include <cstdio>
int main() {
    int num, sum=0;
    scanf("%d", &num);
    for(int i=0; i<num; ++i){
        int x;
        scanf("%1d", &x);
        sum += x;
    }
    printf("%d\n", sum);
    return 0;
}
