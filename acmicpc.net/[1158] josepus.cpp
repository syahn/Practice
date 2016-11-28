// # Reflection

// This problem is for practicing to use queue.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	2410	1167	931	52.421%
// 문제
// 조세퍼스 문제는 다음과 같다.
//
// 1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 M(≤ N)이 주어진다. 이제 순서대로 M번째 사람을 제거한다. 한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다. 이 과정은 N명의 사람이 모두 제거될 때까지 계속된다. 원에서 사람들이 제거되는 순서를 (N, M)-조세퍼스 순열이라고 한다. 예를 들어 (7, 3)-조세퍼스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.
//
// N과 M이 주어지면 (N,M)-조세퍼스 순열을 구하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 N과 M이 빈 칸을 사이에 두고 순서대로 주어진다. (1 ≤ M ≤ N ≤ 5,000)
//
// 출력
// 예제와 같이 조세퍼스 순열을 출력한다.

// # Answer

// # Initial version
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int N, M;
    cin >> M >> N;
    for (int i=1; i<=M; i++){
        q.push(i);
    }
    cout << '<';
    while(!q.empty()){
        for(int j=1; j<N; j++){
            int temp= q.front();
            q.pop();
            q.push(temp);
        }

        int result = q.front();
        q.pop();
        if(q.size()==0){
            cout << result;
            break;
        }
        cout << result << ',' << ' ';
    }

    cout << '>';


}

// # Improved version

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int N, M;
    cin >> M >> N;
    for (int i=1; i<=M; i++){
        q.push(i);
    }
    cout << '<';
    while(!q.empty()){
        for(int j=1; j<N; j++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();

        if(q.size()!=0){
            cout << ", ";
        }
    }
    cout << '>' << endl;
    return 0;
}
