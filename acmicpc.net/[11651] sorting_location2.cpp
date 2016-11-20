// # Reflection

// This problem is for practicing to use sort x, y location with conditions.


// # Problem
// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	1165	675	580	62.500%
// 문제
// 2차원 평면 위의 점 N개가 주어진다. 좌표를 y좌표가 증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개의 줄에는 i번점의 위치 xi와 yi가 주어진다. (-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상 정수이고, 위치가 같은 두 점은 없다.
//
// 출력
// 첫째 줄부터 N개의 줄에 점을 정렬한 결과를 출력한다.

// # Answer

// # Initial version
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
struct Point {
    int x;
    int y;
};
bool cmp(const Point &u, const Point &v){
    if (u.y < v.y){
        return true;
    } else if (u.y == v.y){
        return u.x < v.x;
    } else
        return false;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<Point> a(n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &a[i].x, &a[i].y);
    }
    sort(a.begin(), a.end(), cmp);
    for(int j=0; j<a.size(); j++){
        cout << a[j].x<< ' ' << a[j].y<< '\n';
    }
    return 0;
}

// # Improved version
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    scanf("%d",&n);
    vector<pair<int,int>> a(n);
    for (int i=0; i<n; i++) {
        scanf("%d %d",&a[i].second,&a[i].first);
    }
    sort(a.begin(),a.end());
    for (auto &p : a) {
        printf("%d %d\n",p.second, p.first);
    }
    return 0;
}
