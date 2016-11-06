// # Reflection

// For notation has potential for various situation. If I could use this in more
// flexible way, I could write code in more simple way. But it might decrease the
// readability for other people.

// # Problem
//
// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	1912	1277	1203	67.889%
// 문제
// 어떤 수들이 있을 때, 그 수들을 대표하는 값으로 가장 흔하게 쓰이는 것은 평균이다. 평균은 주어진 모든 수의
// 합을 수의 개수로 나눈 것이다. 예를 들어 10, 40, 30, 60, 30의 평균은
// 가 된다.
//
// 평균 이외의 또 다른 대표값으로 중앙값이라는 것이 있다. 중앙값은 주어진 수를 크기 순서대로 늘어 놓았을 때
// 가장 중앙에 놓인 값이다. 예를 들어 10, 40, 30, 60, 30의 경우, 크기 순서대로 늘어 놓으면
//
// 10 30 30 40 60
//
// 이 되고 따라서 중앙값은 30 이 된다.
//
// 다섯 개의 자연수가 주어질 때 이들의 평균과 중앙값을 구하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄부터 다섯 번째 줄까지 한 줄에 하나씩 자연수가 주어진다. 주어지는 자연수는 100 보다 작은 10 의 배수이다.
//
// 출력
// 첫째 줄에는 평균을 출력하고, 둘째 줄에는 중앙값을 출력한다. 평균과 중앙값은 모두 자연수이다.

// # Answer

// # Initial version

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(5);
int sum = 0;
int main() {
    for(int i=0; i<5; ++i){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    cout << sum / 5 << '\n';
    sort(arr.begin(), arr.end());
    cout << arr[2];
    return 0;
}


// # Improved version

#include <iostream>
#include <vector>
using namespace std;

vector<int> arr(10);
int sum = 0;
int temp = 0;
int main() {
    for(int i=5, val; i--; sum+=val, ++arr[val/10]){
        scanf("%d", &val);
    }
    cout << sum / 5 << '\n';
    for(int j=1; j<10; ++j){
        temp += arr[j];
        if(temp>=3) {
            cout << j*10;
            break;
        }
    }
    return 0;
}
