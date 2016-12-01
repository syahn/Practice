// # Reflection

// - This problem is practice for using map and pair.
// - double and long long has difference.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	4491	1614	1375	37.609%
// 문제
// 전자 제품에는 저항이 들어간다. 저항은 색 3개를 이용해서 그 저항이 몇 옴인지 나타낸다.
//
// 처음 색 2개는 저항의 값이고, 마지막 색은 곱해야 하는 값이다.
//
// 저항의 값은 다음 표를 이용해서 구한다.
//
// 색	값	곱
// black	0	1
// brown	1	10
// red	2	100
// orange	3	1000
// yellow	4	10000
// green	5	100000
// blue	6	1000000
// violet	7	10000000
// grey	8	100000000
// white	9	1000000000
// 예를 들어, 저항에 색이 yellow, violet, red였다면 저항의 값은 4,700이 된다.
//
// 입력
// 첫째 줄에 첫번째 색, 둘째 줄에 두번째 색, 셋째 줄에 세번째 색이 주어진다. 색은 모두 위의 표에 써 있는 색만 주어진다.
//
// 출력
// 첫째 줄에 입력을 주어진 저항의 저항값을 출력한다.

// # Answer

// # Initial version

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <map>
using namespace std;
int main() {
    map<string, pair<int,long long>> res={
            {"black", {0, 1}},
            {"brown", {1, 10}},
            {"red", {2,100}},
            {"orange", {3, 1000}},
            {"yellow", {4, 10000}},
            {"green", {5, 100000}},
            {"blue", {6, 1000000}},
            {"violet", {7, 10000000}},
            {"grey", {8, 100000000}},
            {"white", {9, 1000000000}}
    };

    string first, second, third;
    cin >> first >> second >> third;

    cout << (res[first].first * 10 + res[second].first) * res[third].second ;
    return 0;
}

// # Improved version
