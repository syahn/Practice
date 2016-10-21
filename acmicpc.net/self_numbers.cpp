// # Reflection

// At this problem, I could practice several c++ method. As newbie of c++, it was good practice to use C++ vector, find method.
// C++ has quite a big volume of STL library. I love it. I've learned that technics of checking whethere array has own value.
// Given array should have array number and I can make additional array which has every value initialized with 0.
// Looping the former array, if value fulfills the condition, I can change the value from 0 to 1 in corresponding new array.
// After things done, I could print out those values like if(newArray(i)){ cout << "~~"}.
// In addition, when I find the each digit of number, I don't need to count from the leftmost digit. Instead given number moduler 10 returns the right most digit.
// After that, divide 10 one more time such that it returns given number deleted with rightmost digit of one's number.
// I always thought I should be counted from the left, but counting from the right is more efficent and simple solution.
// Those are quite smart ways! I could learn a lot from this problem.

// # Problem
// 시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
// 1 초	128 MB	1827	1023	873	59.550%
//
// 문제
// In 1949 the Indian mathematician D.R. Kaprekar discovered a class of numbers called self-numbers.
// For any positive integer n, define d(n) to be n plus the sum of the digits of n. (The d stands for digitadition, a term coined by Kaprekar.)
// For example, d(75) = 75 + 7 + 5 = 87. Given any positive integer n as a starting point, you can construct the infinite increasing sequence of integers n, d(n), d(d(n)), d(d(d(n))), ....
// For example, if you start with 33, the next number is 33 + 3 + 3 = 39, the next is 39 + 3 + 9 = 51, the next is 51 + 5 + 1 = 57, and so you generate the sequence
//
// 33, 39, 51, 57, 69, 84, 96, 111, 114, 120, 123, 129, 141, ...
//
// The number n is called a generator of d(n). In the sequence above, 33 is a generator of 39, 39 is a generator of 51, 51 is a generator of 57, and so on. Some numbers have more than one generator:
// for example, 101 has two generators, 91 and 100. A number with no generators is a self-number. There are thirteen self-numbers less than 100: 1, 3, 5, 7, 9, 20, 31, 42, 53, 64, 75, 86, and 97.
//
// Write a program to output all positive self-numbers less than 10000 in increasing order, one per line.

// # Answer
// # Initial version

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int count(int num){
	int counter = 0;
	while(num >= 10){
		num = num / 10;
		counter++;
	}
	return counter;
}

int generator(int num){
	int digit = count(num);

	int divider=0;
	int sum=num;
	int nthDigit=0;

	for (int i=digit; i>-1; i--){
		divider = pow(10, i);
		nthDigit = num / divider;
		num = num % divider;
		sum += nthDigit;
	}
	return sum;
}

int main() {
	vector<int> arr;

	for (int i=1; i<10001; i++){
		arr.push_back(generator(i));
	}

	for (int i=1; i<10001; i++){
		if (!(find(arr.begin(), arr.end(), i) != arr.end())){
			cout << i << "\n";
		}
	}
	return 0;
}




// # Improved version


#include <cstdio>

int main()
{
    int num[10000] = { 0 };

    for (int i = 0; i < 10000; i++) {
        int j = i;
        int sum = i;

        while (j) {
            sum += j % 10;
            j /= 10;
        }

        if (sum < 10000) num[sum] = 1;
    }

    for (int i = 0; i < 10000; i++)
        if (!num[i]) printf("%d\n", i);

    return 0;
}
