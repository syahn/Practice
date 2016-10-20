// # Reflection
//
// I solved this problem in 4 trials. I was confused how I could build the optimal algorithm, so I've solved it in ugly way.
// But, somebody did a beautiful job with concept of substraction. I liked the way of thinking. 
//
// # Problem
//
// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	9347	4302	3936	49.323%
// 문제
// 세 정수 A, B, C가 주어진다. 이 때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 세 정수 A, B, C가 공백으로 구분되어 주어진다. (1 ≤ A, B, C ≤ 100)
//
// 출력
// 두 번째로 큰 정수를 출력한다.
//
//
// # Answer
//
// # Initial version
#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false);

    int a, b, c;

    cin >> a >> b >> c;
    int arr[3]={a, b, c};

    int temp = (a > b ? a : b);
    int biggest = (temp > c ? temp : c );

    if (biggest == c){
    	cout << (a > b ? a : b);
    } else if (biggest == b){
    	cout << (a > c ? a : c);
    } else {
    	cout << (b > c? b: c);
    }

    return 0;
}

# Improved version

#include <cstdio>

int main(){

    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    if((A-B)*(B-C) >= 0) printf("%d",B);
    else if((B-A)*(A-C) >= 0) printf("%d",A);
    else printf("%d",C);

    return 0;
}
