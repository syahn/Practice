// # Reflection

// Initially I thought I need another function to return the days of the month according to
// value of month. In terms of modularity, first answer is better than latter one, but later one
// is more compact, and simple as a algorithm problem. In production, I'll use first one.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	11545	4865	4303	43.579%
//
// 문제
// 오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 빈 칸을 사이에 두고 x(1≤x≤12)와 y(1≤y≤31)이 주어진다. 참고로 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.
//
// 출력
// 첫째 줄에 x월 y일이 무슨 요일인지에 따라 SUN, MON, TUE, WED, THU, FRI, SAT중 하나를 출력한다.

// # Answer

// Initial version
#include <iostream>
#include <string>

using namespace std;

int numOfDay(int num){
    switch(num){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
        case 2:
            return 28;
            break;
    }
}

int main() {
    int x,y,sum=0, sumOfDay;
    string arr[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    cin >> x >> y;

    for (int i=1; i<x; i++){
        sum += numOfDay(i);
    }
    sumOfDay = (sum + y) % 7 ;

    cout << arr[sumOfDay];

    return 0;
}


// Improved version
#include <iostream>
#include <string>

using namespace std;

int main() {
	int x, y, sumOfDay, sum=0;

	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string dayOfWeek[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

	cin >> x >> y;

	for (int i=1; i<x; i++){
		sum += month[i-1];
	}

	sumOfDay = (sum + y) % 7 ;
	cout << dayOfWeek[sumOfDay];

	return 0;
}
