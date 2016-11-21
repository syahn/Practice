// # Reflection

// It is the first time to use lambda function in the solution. It looks more simple
// and neat in contrast to the initial version. But running time is slower than that.
// Compared to that the initial one doesn't evaluate all conditions, the improved one
// evaluate both of conditions.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 3 초	256 MB	2327	827	615	40.065%
// 문제
// 온라인 저지에 가입한 사람들의 나이와 이름이 가입한 순서대로 주어진다. 이 때, 회원들을 나이가 증가하는 순으로, 나이가 같으면 먼저 가입한 사람이 앞에 오는 순서로 정렬하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 온라인 저지 회원의 수 N이 주어진다. (1 ≤ N ≤ 100,000)
//
// 둘째 줄부터 N개의 줄에는 각 회원의 나이와 이름이 공백으로 구분되어 주어진다. 나이는 1보다 크거나 같으며, 200보다 작거나 같은 정수이고, 이름은 알파벳 대소문자로 이루어져 있고, 길이가 100보다 작거나 같은 문자열이다. 입력은 가입한 순서로 주어진다.
//
// 출력
// 첫째 줄부터 총 N개의 줄에 걸쳐 온라인 저지 회원을 나이 순, 나이가 같으면 가입한 순으로 한 줄에 한 명씩 나이와 이름을 공백으로 구분해 출력한다.

// # Answer

// # Initial version

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

struct Person{
    int age;
    string name;
    int join;
};

bool cmp(const Person &a, const Person &b){
    if(a.age < b.age){
        return true;
    } else if (a.age == b.age){
        if(a.join < b.join){
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<Person> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].age >> a[i].name;
        a[i].join = i;
    }

    sort(a.begin(), a.end(), cmp);

    for(int j=0; j<a.size(); j++){
        cout << a[j].age << ' ' << a[j].name << '\n';
    }
    return 0;
}

// # Improved version

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

struct Person{
    int age;
    string name;
    int join;
};

int main() {
    int n;
    scanf("%d", &n);
    vector<Person> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].age >> a[i].name;
        a[i].join = i;
    }

    sort(a.begin(), a.end(), [](Person u,Person v){
        return u.age < v.age || (u.age == v.age && u.join < v.join);
    });

    for(int j=0; j<a.size(); j++){
        cout << a[j].age << ' ' << a[j].name << '\n';
    }
    return 0;
}
