// # Reflection

// - Don't forget that I need to specify exception e in reference of pointer.

// # Problem

// Objective
// Yesterday's challenge taught you to manage exceptional situations by using try
// and catch blocks. In today's challenge, you're going to practice throwing and propagating an exception.
// Check out the Tutorial tab for learning materials and an instructional video!
//
// Task
// Write a Calculator class with a single method: int power(int,int).
// The power method takes two integers,  and , as parameters and returns the integer result of .
// If either  or  is negative, then the method must throw an exception with the message: n and p should be non-negative.


// # Initial solution
#include <stdexcept>
class Calculator{
    public:
    int power(int n, int p){
        if(n<0 || p<0){
            throw invalid_argument("n and p should be non-negative");
        }
        return pow(n, p);
    }
};

try{
      int ans=myCalculator.power(n,p);
      cout<<ans<<endl;
}
catch(exception& e){
    cout<<e.what()<<endl;
}

// # Improved solution
