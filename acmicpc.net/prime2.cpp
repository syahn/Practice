// # Reflection

// At the first moment, I thought it's quite easy problem, so I wondered why the
// success rate of the problem is around 35%. It turns out that there are hidden
// conditions on it. In a matter of fact, it's explicit condition, but everbody
// including me overlooked it. So be careful to the condition. And I learned good
// technic that if I want to find minimum value, I don't need to compare it from
// the small value. If the array is ordered, I could start to compare from the
// back part to the front part, and I can just assign the value to the min variable.
// It would be the smallest value!


// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	3321	1089	982	35.826%
//
// 문제
// 자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최소값을 찾는 프로그램을 작성하시오.
//
// 예를 들어 M=60, N=100이 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 이들 소수의 합은 620이고, 최소값은 61이 된다.
//
// 입력
// 입력의 첫째 줄에 M이, 둘째 줄에 N이 주어진다.
//
// M과 N은 10,000이하의 자연수이며, M은 N보다 같거나 작다.
//
// 출력
// M이상 N이하의 자연수 중 소수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최소값을 출력한다.
//
// 단, M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 -1을 출력한다.


// # Answer

// # Initial version

#include <iostream>
#include <vector>
#define INF 987654321
using namespace std;

int main() {
	int M, N, isPrime;
	cin >> M >> N;
	vector<int> arr;

	for(int i=M; i<=N; ++i){
		isPrime=true;
		if(i==1) isPrime=false;
		for(int j=2; j<i; ++j){
			if(i%j == 0){
				isPrime=false;
				break;
			}
		}
		if(isPrime) arr.push_back(i);
	}

	if(arr.empty()) {
		cout << -1;
		return 0;
	}

	int sum = 0;
	int min= INF;
	int NUM = arr.size();

	for(int k=0; k<NUM; ++k){
		sum += arr[k];
		if(arr[k]<min) min = arr[k];
	}

	cout << sum << "\n" << min;
	return 0;
}


// # Improved version

#include <iostream>
#include <vector>
#define INF 987654321

using namespace std;

int main() {
	int M, N, isPrime, sum=0, min=INF;
	cin >> M >> N;
	for(int i=N; i>=M; --i){
		isPrime=true;
		if(i==1) isPrime=false;
		for(int j=2; j<i; ++j){
			if(i%j == 0){
				isPrime=false;
				break;
			}
		}
		if(isPrime) {
			sum += i;
			min = i;
		}
	}
	if(min != INF) cout << sum << "\n" << min;
	else cout << -1;
	return 0;

}
