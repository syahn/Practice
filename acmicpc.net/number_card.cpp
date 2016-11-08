// # Reflection

// At first glance, I came up with soluction similar to the improved one. But I tried
// to use STL. So, I tried find, sort, binary_search, so it's quite a good practice.
// Allocating big size array or vector is quite useful when I want to check whether
// it has some value. What I would do is to turn on the array when it has corresponding
// value.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	256 MB	3864	1565	1139	41.343%
//
// 문제
// 숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 숫자 M개가 주어졌을 때, 이 숫자가 적혀있는 숫자 카드를 상근이가 가지고 있는지 아닌지를 구하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N (1 ≤ N ≤ 500,000)이가 주어진다. 둘째 줄에는 숫자 카드에 적혀있는 숫자가 주어진다. 숫자 카드에 적혀있는 숫자는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다. 두 숫자 카드에 같은 숫자가 적혀있는 경우는 없다.
//
// 셋째 줄에는 M (1 ≤ M ≤ 500,000)이 주어진다. 넷째 줄에는 상근이가 가지고 있는 숫자 카드인지 아닌지를 구해야 할 M개의 숫자가 주어지며, 이 숫자는 공백으로 구분되어져 있다. 이숫자도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다
//
// 출력
// 넷째 줄에 입력으로 주어진 M개의 숫자에 대해서, 각 숫자가 적힌 숫자 카드를 상근이가 가지고 있으면 1을, 아니면 0을 공백으로 구분해 출력한다.

// # Answer

// # Initial version

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(500000);
int num, val=0;

int main() {
		scanf("%d", &num);
		for(int i=0; i<num; ++i){
			scanf("%d", &arr[i]);
		}
		sort(arr.begin(), arr.end());
		scanf("%d", &num);
		for(int j=0; j<num; ++j){
			scanf("%d", &val);
			if(binary_search(arr.begin(), arr.end(), val)){
				cout << 1 << " ";
			} else {
				cout << 0 << " ";
			}
		}
		return 0;

}


// # Improved version

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define OFFSET 10000001
#define SIZE OFFSET * 2 + 1

vector<bool> arr(SIZE);
int num, item, val=0;

int main() {
		scanf("%d", &num);
		for(int i=0; i<num; ++i){
			scanf("%d", &val);
			arr[val+OFFSET] = true;
		}
		scanf("%d", &num);
		for(int j=0; j<num; ++j){
			scanf("%d", &item);
			arr[item+OFFSET] > 0 ? cout<<"1 " : cout << "0 ";
		}
		return 0;

}
