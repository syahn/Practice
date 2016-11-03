// # Reflection

// At first, I thought I solved the problem in the best way, but there were other
// good solutions. If I'm gonna make two for loop, just think one more time whether
// it could be merged in one loop. 

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	2105	1278	1183	62.559%
//
// 문제
// 어떤 수들이 있을 때, 그 수들을 대표하는 값으로 가장 흔하게 쓰이는 것은 평균이다. 평균은 주어진 모든 수의 합을 수의 개수로 나눈 것이다. 예를 들어 10, 40, 30, 60, 30, 20, 60, 30, 40, 50의 평균은
//
// 이 된다.
//
// 평균 이외의 또 다른 대표값으로 최빈값이라는 것이 있다. 최빈값은 주어진 수들 가운데 가장 많이 나타나는 수이다. 예를 들어 10, 40, 30, 60, 30, 20, 60, 30, 40, 50 이 주어질 경우,
//
// 30 이 세 번,
//
// 40 과 60 이 각각 두 번,
//
// 10, 20, 50 이 각각 한 번씩 나오므로, 최빈값은 30 이 된다.
//
// 열 개의 자연수가 주어질 때 이들의 평균과 최빈값을 구하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄부터 열 번째 줄까지 한 줄에 하나씩 자연수가 주어진다. 주어지는 자연수는 1,000 보다 작은 10 의 배수이다.
//
// 출력
// 첫째 줄에는 평균을 출력하고, 둘째 줄에는 최빈값을 출력한다. 최빈값이 둘 이상일 경우 그 중 하나만 출력한다. 평균과 최빈값은 모두 자연수이다.

// # Answer

// # Initial version

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    int max=0;
    int sum=0;
    vector<int> arr(100);

    for(int i=0; i<10; i++){
        cin >> num;
        sum += num;
        arr[num/10]++;
    }
    for(int j=0; j<100; ++j){
        if(max<arr[j]) max = j;
    }
    cout << sum/10 << endl << max*10 << endl;
    return 0;
}

// # Improved version

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    int max=0;
    int maxVal=0;
    int sum=0;
    vector<int> arr(100);

    for(int i=0; i<10; i++){
        cin >> num;
        sum += num;
        arr[num/10]++;
        if(max<arr[num/10]) {max = arr[num/10]; maxVal=num;}
    }
    cout << sum/10 << endl << maxVal << endl;
    return 0;
}
