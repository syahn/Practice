// 1. Reflection

// - I solved it. 
// - It could be solved with reduce. but It's better.

// 2. Problem

// Given a positive integer num, return the sum of all odd Fibonacci numbers that
// are less than or equal to num.
//
// The first two numbers in the Fibonacci sequence are 1 and 1. Every additional
// number in the sequence is the sum of the two previous numbers.
// The first six numbers of the Fibonacci sequence are 1, 1, 2, 3, 5 and 8.
//
// For example, sumFibs(10) should return 10 because all odd Fibonacci numbers less
// than 10 are 1, 1, 3, and 5.

// 3. Initial solution

//jshint esversion:6
function sumFibs(num) {
  let a=1, b=1, ret=1;
  while(b <= num){
    if(b % 2) ret += b;
    let t = a;
    a = b;
    b = t + b;
  }
  return ret;
}

// 4. Improved solution
