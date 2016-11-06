// # Reflection

// Even though it's easy problem, there is always other approaches that I can learn
// something. It might not be preferable to use scanf in the while condition part,
// it is available.

// # Problem

시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	2627	1696	1599	66.321%

문제
두 수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
입력은 여러 개의 테스트 케이스로 이루어져 있다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A,B < 10)

A와 B가 모두 0인 경우에 프로그램을 종료한다.

출력
각 테스트 케이스마다 A+B를 출력한다.

// # Answer

// # Initial version

#include <iostream>

using namespace std;

int A, B;

int main() {
    while(1){
        scanf("%d %d", &A, &B);
        if(!A&&!B) break;
        cout << A+B << "\n";
    }
    return 0;
}


// # Improved version

#include <iostream>

using namespace std;

int A, B;

int main() {
    while(scanf("%d %d", &A, &B) && (A||B)){
        cout << A+B << "\n";
    }
    return 0;
}
