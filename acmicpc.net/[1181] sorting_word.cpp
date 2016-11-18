
// # Reflection

// This problem is for practicing sort().
// If I want to compare words in alphabetical order, I could compare it like a > b
// If I use C to solve it, I might decrease the running time.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	3724	1224	828	33.907%
// 문제
// 알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
//
// 길이가 짧은 것부터
// 길이가 같으면 사전 순으로
// 입력
// 첫째 줄에 단어의 개수 N이 주어진다. (1≤N≤20,000) 둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로
// 이루어진 단어가 한 줄에 하나씩 주어진다. 주어지는 문자열의 길이는 50을 넘지 않는다.
//
//
// 출력
// 조건에 따라 정렬하여 단어들을 출력한다. 단, 같은 단어가 여러 번 입력된 경우에는 한 번씩만 출력한다.

// # Answer

// # Initial version

#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
bool cmp(const string &u, const string &v){
    return (u.size() < v.size() || (u.size() == v.size() && u < v));
}
int main(){
    int n;
    string w;
    vector<string> v;
    cin >> n;
    while(n--){
        cin >> w;
        v.push_back(w);
    }
    sort(v.begin(), v.end(), cmp);
    auto last = unique(v.begin(), v.end());
    v.erase(last, v.end());
    for(string x : v){
        cout << x << '\n';
    }
    return 0;
}

// # Improved version


#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(const string &u, const string &v){
    return (u.size() < v.size() || (u.size() == v.size() && u < v));
}
int main(){
    int n;
    string w;
    vector<string> v;
    cin >> n;
    while(n--){
        cin >> w;
        v.push_back(w);
    }
    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());
    for(string x : v){
        cout << x << '\n';
    }
    return 0;
}
