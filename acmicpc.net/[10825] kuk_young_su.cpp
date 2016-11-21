// # Reflection

// This problem is for practicing to use sort() with cmp callback. 
// If I want to define comparison logic with simple if, else if, else combination,
// I should focus how it should escape the loop. Don't make it simply. Think again
// to make it.
// Compared to initial solution, improved one used make_tuple for comparison, and
// it's quite neat and simple.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	1192	525	408	45.946%
// 문제
// 도현이네 반 학생 N명의 이름과 국어, 영어, 수학 점수가 주어진다. 이 때, 다음과 같은 조건으로 학생의 성적을 정렬하는 프로그램을 작성하시오.
//
// 국어 점수가 감소하는 순서로
// 국어 점수가 같으면 영어 점수가 증가하는 순서로
// 국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서로
// 모든 점수가 같으면 이름이 사전 순으로 증가하는 순서로
// 입력
// 첫째 줄에 도현이네 반의 학생의 수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 한 줄에 하나씩 각 학생의 이름, 국어, 영어, 수학 점수가 공백으로 구분해 주어진다. 점수는 1보다 크거나 같고, 100보다 작거나 같은 자연수이다. 이름은 알파벳 대소문자로 이루어진 문자열이고, 길이는 10자리를 넘지 않는다.
//
// 출력
// 문제에 나와있는 정렬 기준으로 정렬한 후 첫째 줄부터 N개의 줄에 걸쳐 각 학생의 이름을 출력한다.


// # Answer

// # Initial version

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;
struct Point {
    int x;
    int y;
    int z;
    string name;
};

bool cmp(const Point &a, const Point &b){
    if (a.x > b.x){
        return true;
    } else if (a.x == b.x){
        if(a.y < b.y) {
            return true;
        } else if (a.y == b.y) {
            if (a.z > b.z) {
                return true;
            } else if (a.z == b.z) {
                return a.name < b.name;
            }
        }
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<Point> a(n);
    char str[11];
    for(int i=0; i<n; i++){
        scanf("%s %d %d %d",str, &a[i].x, &a[i].y, &a[i].z);
        a[i].name = str;
    }
    sort(a.begin(), a.end(), cmp);
    for(int j=0; j<a.size(); j++){
        cout << a[j].name << '\n';
    }
    return 0;
}

// # Improved version

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Person {
    string name;
    int kor, eng, math;
};
bool cmp(const Person &u, const Person &v) {
    return make_tuple(-u.kor, u.eng, -u.math, u.name) < make_tuple(-v.kor, v.eng, -v.math, v.name);
}
int main() {
    int n;
    cin >> n;

    vector<Person> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i].name >> a[i].kor >> a[i].eng >> a[i].math;
    }

    sort(a.begin(), a.end(), cmp);

    for (int i=0; i<n; i++) {
        cout << a[i].name << '\n';
    }

    return 0;
}
