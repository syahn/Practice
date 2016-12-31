// # Reflection

// - good practice for using deque and vector and stack;

// # Problem

// Welcome to Day 18! Today we're learning about Stacks and Queues. Check out the
// Tutorial tab for learning materials and an instructional video!
//
// A palindrome is a word, phrase, number, or other sequence of characters which
// reads the same backwards and forwards. Can you determine if a given string, , is a palindrome?
//
// To solve this challenge, we must first take each character in , enqueue it in a
// queue, and also push that same character onto a stack. Once that's done, we must
// dequeue the first character from the queue and pop the top character off the stack,
// then compare the two characters to see if they are the same; as long as the characters
// match, we continue dequeueing, popping, and comparing each character until
// our containers are empty (a non-match means  isn't a palindrome).
//
// Write the following declarations and implementations:
//
// Two instance variables: one for your , and one for your .
// A void pushCharacter(char ch) method that pushes a character onto a stack.
// A void enqueueCharacter(char ch) method that enqueues a character in the  instance variable.
// A char popCharacter() method that pops and returns the character at the top of the instance variable.
// A char dequeueCharacter() method that dequeues and returns the first character in the instance variable.


// # Initial solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<char> stack;
    vector<char> queue;



public:
    void pushCharacter(char ch){
        stack.push_back(ch);
    };

    void enqueueCharacter(char ch){
        queue.push_back(ch);
    };

    char popCharacter(){
        char temp = *stack.rbegin();
        stack.pop_back();
        return temp;
    };

    char dequeueCharacter(){
        char temp = *queue.begin();
        queue.erase(queue.begin());
        return temp;
    };

};



// # Improved solution

using namespace std;

class Solution {
private:
    stack<char> s;
    deque<char> q;

public:
    void pushCharacter(char ch){
        s.push(ch);
    };

    void enqueueCharacter(char ch){
        q.push_back(ch);
    };

    char popCharacter(){
        char temp = s.top();
        s.pop();
        return temp;
    };

    char dequeueCharacter(){
        char temp = q.front();
        q.pop_front();
        return temp;
    };

};
