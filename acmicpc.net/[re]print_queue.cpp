// # Reflection

// I tried this problem to practice using queue. And it turns out it was quite good
// practice. It could be solved with pair structure too. I'll try to solve this later.
// Because, I think there are better way to solve it. 

// # Problem
// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 2 초	128 MB	1184	606	515	56.100%

// 문제
// The only printer in the computer science students’ union is experiencing an
// extremely heavy workload. Sometimes there are a hundred jobs in the printer queue
// and you may have to wait for hours to get a single page of output.
//
// Because some jobs are more important than others, the Hacker General has invented
// and implemented a simple priority system for the print job queue. Now, each job
// is assigned a priority between 1 and 9 (with 9 being the highest priority, and
//   1 being the lowest), and the printer operates as follows.
//
// The first job J in queue is taken from the queue.
// If there is some job in the queue with a higher priority than job J, then move J
// to the end of the queue without printing it.
// Otherwise, print job J (and do not put it back in the queue).
//
// In this way, all those important muffin recipes that the Hacker General is
// printing get printed very quickly. Of course, those annoying term papers that
// others are printing may have to wait for quite some time to get printed, but that’s life.
//
// Your problem with the new policy is that it has become quite tricky to determine
// when your print job will actually be completed. You decide to write a program to
// ﬁgure this out. The program will be given the current queue (as a list of priorities)
// as well as the position of your job in the queue, and must then calculate how long
// it will take until your job is printed, assuming that no additional jobs will
// be added to the queue. To simplify matters, we assume that printing a job always
// takes exactly one minute, and that adding and removing jobs from the queue is instantaneous.
//
// 입력
// One line with a positive integer: the number of test cases (at most 100).
// Then for each test case:
//
// One line with two integers n and m, where n is the number of jobs in the queue
// (1 ≤ n ≤ 100) and m is the position of your job (0 ≤ m ≤ n−1). The ﬁrst position
// in the queue is number 0, the second is number 1, and so on.
// One line withn integers in the range 1 to 9, giving the priorities of the jobs in the queue.
// The first integer gives the priority of the ﬁrst job, the second integer the priority of the second job, and so on.
// 출력
// For each test case, print one line with a single integer; the number of minutes
// until your job is completely printed, assuming that no additional print jobs will arrive.

// # Answer

// # Initial version

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    while(n--){
        int count = 0;
        int num, me, val, myP, max, first, pos;
        queue<int> q;
        vector<int> v;

        scanf("%d %d", &num, &me);
        for(int i=0; i<num; ++i){
            scanf("%1d", &val);
            v.push_back(val);
            if(i==me) myP = val;
            q.push(val);
        }

        pos = me;
        sort(v.begin(), v.end());
        max = v.back();
        v.pop_back();

        while(1){
            if(q.front() == max){
                count++;
                if(pos==0 && max == myP) break;
                q.pop();
                max = v.back();
                v.pop_back();
                pos = (pos == 0) ? pos + q.size()-1 : pos -1 ;
            } else {
                first = q.front();
                q.pop();
                q.push(first);
                pos = (pos == 0) ? pos + q.size()-1 : pos -1 ;
            }
        }
        cout << count << '\n' ;
    }
    return 0;
}

// # Improved version
