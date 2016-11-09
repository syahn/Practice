
// # Reflection

// This was the first time I tried to use stack in real problem. Before this problem,
// I only learned how to make or implement the data structure in the class.
// From this problem, I got to know if I want to store strings sequencely, I don't
// need to store those in the array or vector, but just add those on one string.

// # Problem

시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
2 초	128 MB	4472	1041	756	25.962%
문제
스택 (stack)은 기본적인 자료구조 중 하나로, 컴퓨터 프로그램을 작성할 때 자주 이용되는 개념이다. 스택은 자료를 넣는 (push) 입구와 자료를 뽑는 (pop) 입구가 같아 제일 먼저 들어간 자료가 제일 나중에 나오는 (FILO, first in last out) 특성을 가지고 있다.

1부터 n까지의 수를 스택에 넣었다가 뽑아 늘어놓음으로써, 하나의 수열을 만들 수 있다. 이 때, 스택에 push하는 순서는 반드시 오름차순을 지키도록 한다고 하자. 임의의 수열이 주어졌을 때 스택을 이용해 그 수열을 만들 수 있는지 없는지, 있다면 어떤 순서로 push와 pop 연산을 수행해야 하는지를 알아낼 수 있다. 이를 계산하는 프로그램을 작성하라.

입력
첫 줄에 n(1≤n≤100,000)이 주어진다. 둘째 줄부터 n개의 줄에는 수열을 이루는 1이상 n이하의 정수가 하나씩 순서대로 주어진다. 물론 같은 정수가 두 번 나오는 일은 없다.

출력
입력된 수열을 만들기 위해 필요한 연산을 한 줄에 한 개씩 출력한다. push연산은 +로, pop 연산은 -로 표현하도록 한다. 불가능한 경우 NO를 출력한다.

// # Answer

// # Initial version


#include <iostream>
#include <cstdio>
#include <stack>
#include <list>
#include <utility>
#include <vector>
#include <string>
using namespace std;

stack<int> s;
vector<int> v;
string output;

int num, val;
int main() {
	scanf("%d", &num);

	for(int i=0; i<num; ++i){
		scanf("%d", &val);
		v.push_back(val);
	}
    int log =0;
	for(int j=1; j<=num; ++j){
		int item = v[j-1];
		if(s.empty()){
            for(int k=log+1; item >= k; k++) {
                s.push(k);
                output.push_back("+");
                log = k;
            }
			s.pop();
			output.push_back("-");
        } else {
            if(item == s.top()){
				s.pop();
				output.push_back("-");
			}
            else if(item > s.top()) {
                if(log < num){
                    for(int k=log+1; item >= k; k++){
                        s.push(k);
                        output.push_back("+");
                        log=k;
                    }
                    s.pop();
                    output.push_back("-");
                }
			} else if(item < s.top()){
				cout << "NO";
				return 0;
			}
		}

	}
	for(int k=0; k<output.size(); k++) {
        cout << output[k] << "\n";
    }
	return 0;
}


// # Improved version

#include <iostream>
#include <cstdio>
#include <stack>
#include <list>
#include <utility>
#include <vector>
#include <string>
using namespace std;

stack<int> s;
vector<int> v;
string output;
int log =0;

int num, val;
int main() {
	scanf("%d", &num);
	for(int i=0; i<num; ++i){
		scanf("%d", &val);
		v.push_back(val);
	}
	for(int j=1; j<=num; ++j){
		int item = v[j-1];
		if(s.empty()){
            for(int k=log+1; item >= k; k++) {
                s.push(k);
                output+="+\n";
                log = k;
            }
			s.pop();
            output+="-\n";
        } else {
            if(item == s.top()){
				s.pop();
                output+="-\n";
			}
            else if(item > s.top()) {
                if(log < num){
                    for(int k=log+1; item >= k; k++){
                        s.push(k);
                        output+="+\n";
                        log=k;
                    }
                    s.pop();
                    output+="-\n";
                }
			} else if(item < s.top()){
				cout << "NO";
				return 0;
			}
		}

	}
    cout << output;
	return 0;
}
