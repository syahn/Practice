// # Reflection

// By this problem, I got to be able to use isupper, islower, isdigit in ctype.h.
// Also, I became to know how I solve this kinds of problem, without getting help
// from additional header files.

// # Problem

// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	256 MB	1835	757	649	43.528%
// 문제
// 문자열 N개가 주어진다. 이 때, 문자열에 포함되어 있는 소문자, 대문자, 숫자, 공백의 개수를 구하는 프로그램을 작성하시오.
//
// 각 문자열은 알파벳 소문자, 대문자, 숫자, 공백으로만 이루어져 있다.
//
// 입력
// 첫째 줄부터 N번째 줄까지 문자열이 주어진다. (1 ≤ N ≤ 100) 문자열의 길이는 100을 넘지 않는다.
//
// 출력
// 첫째 줄부터 N번째 줄까지 각각의 문자열에 대해서 소문자, 대문자, 숫자, 공백의 개수를 공백으로 구분해 출력한다.

// # Answer

// # Initial version

#include <iostream>
#include <cstdio>
#include <string>
#include <ctype.h>
using namespace std;

string s;

int main() {
    ios_base::sync_with_stdio(false);
    while(getline(cin, s)){
        int upper, lower, white, number;
        for(int i=0; i<s.size(); ++i){
            if(isupper(s[i])) upper++;
            else if(islower(s[i])) lower++;
            else if(s[i] == ' ') white++;
            else if(isdigit(s[i])) number++;
        }
        printf("%d %d %d %d\n", lower, upper, number, white);
        lower = upper = number = white = 0;
    }
    return 0;
}

// # Improved version

#include <cstdio>
int upper, lower, num, white;
char c;
int main() {
    while(~(c=getchar())){
        if(c >= 'a' && c <= 'z') lower++;
        if(c >= 'A' && c <= 'Z') upper++;
        if(c >= '0' && c <= '9') num++;
        if(c == ' ') white++;
        if(c == '\n'){
            printf("%d %d %d %d\n", lower, upper, num, white);
            lower=upper=num=white=0;
        }
    }
    return 0;
}
