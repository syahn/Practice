// # Reflection

// At first, I used sort() in the algorithm header file. It was simple and neat.
// But, It was sort of cheating. So I needed to do it from the scratch, and I saw
// simple and intuitive solution. Basic idea of this is using the array number. At
// first, allocate double number of memory in the array and initialized every place
// with 0. If I encounter the number, I'll increase the number by 1. After looping
// all of the value, I'll get the array of array number is increased by 1 when I read
// that number. So, array number - 1000 would be sorted number. This solution is enabled
// by the condition it has no duplicate number. However, even if it has duplicate number,
// there is solution for that too. This technique is quite a genious approach.
// I think it has O(n) running time sacrificing the space. Good practice!

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	4168	2509	2068	64.484%
// 문제
// N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 수의 개수 N(1<=N<=1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절대값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
//
// 출력
// 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

// # Answer

// # Initial version

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, num;
        cin >> n;
    vector<int> arr;
    arr.reserve(n);

    for(int i=0; i<n; i++){
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    for(int j=0; j<n; j++){
        cout << arr.at(j)<< "\n";
    }
}


// # Improved version

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> arr(2001, 0);

    for(int i=0; i<n; i++){
    	cin >> num;
    	arr.at(num+1000)++;
    }
    for(int j=0; j<2001; j++){
    	if (arr.at(j)) cout << j - 1000<< "\n";
    }

    return 0;
}
