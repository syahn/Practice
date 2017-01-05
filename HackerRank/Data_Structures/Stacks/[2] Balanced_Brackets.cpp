// # Reflection



// # Problem

// A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].
//
// Two brackets are considered to be a matched pair if the an opening bracket
// (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or })
// of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().
//
// A matching pair of brackets is not balanced if the set of brackets it encloses
// are not matched. For example, {[(])} is not balanced because the contents in between
// { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket,
// (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].
//
// By this logic, we say a sequence of brackets is considered to be balanced if the following conditions are met:
//
// It contains no unmatched brackets.
// The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.
// Given  strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, print YES on a new line; otherwise, print NO on a new line.


// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool setCheck(char a, char b){
    switch(a){
        case '(':
            if(b==')') return true;
            else return false;
        case ')':
            if(b=='(') return true;
            else return false;
        case '{':
            if(b=='}') return true;
            else return false;
        case '}':
            if(b=='{') return true;
            else return false;
        case '[':
            if(b==']') return true;
            else return false;
        case ']':
            if(b=='[') return true;
            else return false;
    }
    return true;
}


int main() {
    int n;

    string val;
    scanf("%d", &n);
    cin.ignore();
    for(int i=0; i<n; ++i){
        stack<char> s;
        queue<char> q;
        bool isBal = true;
        getline(cin, val);
        for (char c:val){
            if(c == '(' || c == '[' || c=='{') {
                if(!q.empty()){
                    while(!q.empty()){
                        if(setCheck(q.front(),s.top())){
                            q.pop();
                            s.pop();
                        } else {
                            isBal = false;
                            break;
                        }
                    }
                    if(!s.empty()){
                        isBal = false;
                    }
                } else{
                    s.push(c);
                }

            }
            else if(c == '}' || c == ']' || c==')'){

                if(s.empty()){
                    isBal = false;
                    break;
                } else  {
//                    cout << "PUsh" << endl;
                    q.push(c);
                }

            }
            while(!q.empty()){
                if(!setCheck(s.top(), q.front())){
                    isBal = false;
                     break;
                }
            s.pop();
            q.pop();
            }
            //cout << "s: " <<s.top() << "q: " <<q.front() << endl;
        }
        if(!s.empty() || !q.empty()) isBal = false;

        if(isBal) cout << "YES" << endl;
        else cout << "NO" << endl;


    }
    return 0;
}



// # Improved solution
