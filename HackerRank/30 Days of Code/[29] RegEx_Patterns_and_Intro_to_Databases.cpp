// # Reflection

// - When we use multiset for sorting algorithm, it would be much simpler

// # Problem

// Objective
// Today, we're working with regular expressions. Check out the Tutorial tab for
// learning materials and an instructional video!
//
// Task
// Consider a database table, Emails, which has the attributes First Name and Email ID.
// Given  rows of data simulating the Emails table, print an alphabetically-ordered list of people whose email address ends in .

// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <regex>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> arr;
int main() {
    int n;
    regex rg("[a-z]+@gmail.com$");
    cin >> n;
    while(n--){
        string name, mail;
        cin >> name >> mail;
        if(regex_match(mail, rg)) arr.push_back(name);
    }
    sort(arr.begin(), arr.end());
    for( auto i: arr){
        cout << i << "\n";
    }
    return 0;
}



// # Improved solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <regex>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

multiset<string> ms;
int main() {
    int n;
    regex rg(".+@gmail.com$");
    cin >> n;
    while(n--){
        string name, mail;
        cin >> name >> mail;
        if(regex_match(mail, rg)) ms.insert(name);
    }
    for( auto i: ms){
        cout << i << "\n";
    }
    return 0;
}
