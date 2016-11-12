// # Reflection

// This is for practicing to use priority queue. Simple application for min heap with
// priority queue. I figured out that cin is quite inefficient compared to scnaf.
// There were tremendous difference between them without sync_with_stdio(false)

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	2420	1089	804	47.574%
//
// 문제
// 널리 잘 알려진 자료구조 중 최소 힙이라는 것이 있다. 최소 힙을 이용하여 다음과 같은 연산을 지원하는 프로그램을 작성하시오.
//
// 배열에 자연수 x를 넣는다.
// 배열에서 가장 작은 값을 출력하고, 그 값을 배열에서 제거한다.
// 프로그램은 처음에 비어있는 배열에서 시작하게 된다.
//
// 입력
// 첫째 줄에 연산의 개수 N(1≤N≤100,000)이 주어진다. 다음 N개의 줄에는 연산에 대한 정보를 나타내는 정수 x가 주어진다. 만약 x가 자연수라면 배열에 x라는 값을 넣는(추가하는) 연산이고, x가 0이라면 배열에서 가장 작은 값을 출력하고 그 값을 배열에서 제거하는 경우이다. 입력되는 자연수는 2^31보다 작다.
//
// 출력
// 입력에서 0이 주어진 회수만큼 답을 출력한다. 만약 배열이 비어 있는 경우인데 가장 작은 값을 출력하라고 한 경우에는 0을 출력하면 된다.
// # Answer

// # Initial version

#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> q;

int main() {
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        if(num != 0){
            q.push(-num);
        }
        else {
            if(q.empty()) {
                cout << 0 << '\n';
                continue;
            }
            cout << -q.top() << '\n';
            q.pop();
        }
    }
    return 0;
}

// # Improved version

#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

priority_queue<int> q;

int main() {
    int n;
    scanf("%d", &n);
    while(n--){
        int num;
        scanf("%d", &num);
        if(num > 0) q.push(-num);
        else {
            if(q.empty()) cout << 0 << '\n';
            else {
                cout << -q.top() << '\n';
                q.pop();
            }
        }
    }
    return 0;
}
