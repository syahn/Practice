// 1. Reflection

// - Solved, but took much time.
// - I solved this problem in C++ before, but I couldn't solve it easily.
//   Keep practicing!

// 2. Problem

// Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.
//
// You may assume the integer do not contain any leading zero, except the number 0 itself.
//
// The digits are stored such that the most significant digit is at the head of the list.
//
// Subscribe to see which companies asked this question.

// 3. Initial solution( complexity: time=>O() space=>O())

/**
 * @param {number[]} digits
 * @return {number[]}
 */

//Failed: Overflow
var plusOne = function(digits) {
    let newDigits = Number(digits.join('')) + 1;
    return newDigits.toString().split('').map(v => Number(v));
};

//158ms
var plusOne = function(digits) {
    let round = false, len = digits.length;

    let first = digits[len-1] + 1;
    if(first > 9) {
        round = true;
        digits.splice(len-1, 1, 0);
    } else {
        digits.splice(len-1, 1, first);
    }
    for(let i=len-2; i>-1; i--) {
        let val = digits[i] + 1;
        if(round) {
            if(val > 9) {
                digits.splice(i, 1, 0);
                round = true;
            }
            else {
                digits.splice(i, 1, val);
                round = false;
            }
        } else {

            break;
        }
    }
    if(round) digits.unshift(1);
    return digits;
};

// 4. Improved solution( complexity: time=>O() space=>O() )

// 138ms
var plusOne = function(digits) {
    let hasOne = 1, len = digits.length, s = len - 1;
    while(s > -1 && hasOne) {
        if(digits[s] === 9) {
            digits[s] = 0;
            if(s === 0) {
                digits.unshift(1);
            }
        } else {
            hasOne = 0;
            digits[s]++;
        }
        s--;
    }
    return digits;
};

// 122ms
var plusOne = function(digits) {
    let hasOne = 1, len = digits.length, s = len - 1;
    while(s > -1 && hasOne) {
        hasOne = digits[s] === 9 ? 1 : 0;
        digits[s] = digits[s] === 9 ? 0 : digits[s]+1;
        if(digits[s] === 0 && s === 0) digits.unshift(1);
        s--;
    }
    return digits;
};

// 116ms
var plusOne = function(digits) {
    let hasOne = 1, len = digits.length, s = len - 1;

    while(s > -1) {
        if(digits[s] < 9) {
            digits[s]++;
            return digits;
        }
        digits[s--] = 0;
    }
    digits.unshift(1);
    return digits;
};

//118ms
var plusOne = function(digits) {
    let hasOne = 1, len = digits.length, s = len - 1;
    while(s > -1) {
        if(++digits[s] > 9) digits[s--] = 0;
        else return digits;
    }
    digits.unshift(1);
    return digits;
};
