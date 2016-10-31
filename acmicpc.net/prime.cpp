// # Reflection

// Originally I thought it would be triple loop, therefore, I divided into seperate
// loops. But I thought wrong. I didn't need to put data inte additional array too.
// After revision, code have been changed into simply and intuitively.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	4721	2677	2201	57.845%
//
// 문제
// 주어진 숫자들 중 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
//
// 입력
// 첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
//
// 출력
// 주어진 수들 중 소수의 개수를 출력한다.

// # Answer

// # Initial version

#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N,k, count = 0;
  bool isPrime = false;
  cin >> N;
  vector<int> arr(N);
  for (int i=0; i<N; ++i) cin >> arr[i];
  for (int j=0; j<N; ++j){
    isPrime = true;
    for (int k=2; k<arr[j]; ++k){
        if(!(arr[j] % k)) isPrime = false;
    }
    if(arr[j] != 1 && isPrime) count++;
  }
  cout << count << endl;
  return 0;

}

// # Improved version

#include <iostream>
using namespace std;
int main() {
	int N,num,count = 0;
	bool isPrime = true;
  cin >> N;
  for (int i=0; i< N; ++i){
  	cin >> num;
  	isPrime = true;
  	for (int k=2; k<num; ++k){
  	  if(!(num % k)) isPrime = false;
  	}
  	if(num != 1 && isPrime) count++;
  }
  cout << count << endl;
  return 0;
}
