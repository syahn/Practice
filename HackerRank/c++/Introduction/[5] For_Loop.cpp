// # Reflection

// - Shame on me! I should have not solved this in that simple and naive way! Don't
//   try to be lazy, put much effort to solve it with optimized way!

// # Problem

// A for loop is a programming language statement which allows code to be repeatedly executed.
//
// The syntax for this is
//
// for ( <expression_1> ; <expression_2> ; <expression_3> )
//     <statement>
// expression_1 is used for intializing variables which are generally used for
// controlling terminating flag for the loop.
// expression_2 is used to check for the terminating condition. If this evaluates to false,
// then the loop is terminated.
// expression_3 is generally used to update the flags/variables.
// A sample loop will be
//
// for(int i = 0; i < 10; i++) {
//     ...
// }
// Input Format
//
// You will be given two positive integers,  and  (), separated by a newline.
//


// # Initial solution
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for(int i = a; i<= b; i++ ){
        if( i > 9 ){
            if (i % 2) cout << "odd" << "\n";
            else cout << "even" << "\n";
        } else {
            if(i==1) cout << "one" << "\n";
            else if(i==2) cout << "two" << "\n";
            else if(i==3) cout << "three" << "\n";
            else if(i==4) cout << "four" << "\n";
            else if(i==5) cout << "five" << "\n";
            else if(i==6) cout << "six" << "\n";
            else if(i==7) cout << "seven" << "\n";
            else if(i==8) cout << "eight" << "\n";
            else cout << "nine" << "\n";
        }
    }
    return 0;
}




// # Improved solution

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"} ;
int main() {
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        cout << (i < 10 ? arr[i - 1] : (i % 2) ? "odd" : "even") << endl;
    }

    return 0;
}
