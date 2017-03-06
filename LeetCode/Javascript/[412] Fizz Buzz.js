// 1. Reflection

// - With this problem, I decided to use only triple equals instead of double.
//   Even if it sacrifice the readability, but getting a bug with it is more harmful.

// 2. Problem

// Write a program that outputs the string representation of numbers from 1 to n.
//
// But for multiples of three it should output “Fizz” instead of the number and for
// the multiples of five output “Buzz”. For numbers which are multiples of both
// three and five output “FizzBuzz”.

// 3. Initial solution( complexity: time=>O(n) space=>O(n))

/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
    let ret = [];
    for(let i=1; i<=n; i++){
        if(i % 15 === 0){
            ret.push('FizzBuzz');
        } else if(i % 3 === 0) {
            ret.push('Fizz');
        } else if(i % 5 === 0) {
            ret.push('Buzz');
        } else
            ret.push(i.toString());
    }
    return ret;
};

// 4. Improved solution( complexity: time=>O() space=>O() )
