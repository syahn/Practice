// # Reflection

// - It's practice for multiset.
// - It keeps telling me time-over.


// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	1924	586	459	40.619%
// 문제
// 숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 숫자 M개가 주어졌을 때, 이 숫자가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N (1 ≤ N ≤ 500,000)이가 주어진다. 둘째 줄에는 숫자 카드에 적혀있는 숫자가 주어진다. 숫자 카드에 적혀있는 숫자는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.
//
// 셋째 줄에는 M (1 ≤ M ≤ 500,000)이 주어진다. 넷째 줄에는 상근이가 몇 개 가지고 있는 숫자 카드인지 구해야 할 M개의 숫자가 주어지며, 이 숫자는 공백으로 구분되어져 있다. 이숫자도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.
//
// 출력
// 첫째 줄에 입력으로 주어진 M개의 숫자에 대해서, 각 숫자가 적현 숫자 카드를 상근이가 몇 개 가지고 있는지를 공백으로 구분해 출력한다.

// # Answer

// # Initial version

#include <cstdio>
#include <iostream>
#include <set>
using namespace std;
multiset<int> s1;
int main(){
    int n,m;
    scanf("%d", &n);
    while(n--){
        int temp;
        scanf("%d", &temp);
        s1.insert(temp);
    }
    scanf("%d", &m);
    while(m--){
        int val;
        scanf("%d", &val);
        printf("%d ", s1.count(val));
    }
    return 0;
}



// # Improved version
