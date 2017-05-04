// 1. Reflection

// - Solved. 
// - Remember to use Closure. 
// - Seperate data from code. 

// 2. Problem

// This time we want to write calculations using functions and get the results. Let's have a look at some examples:

// seven(times(five())); // must return 35
// four(plus(nine())); // must return 13
// eight(minus(three())); // must return 5
// six(dividedBy(two())); // must return 3
// Requirements:

// There must be a function for each number from 0 ("zero") to 9 ("nine")
// There must be a function for each of the following mathematical operations: plus, minus, times, dividedBy (divided_by in Ruby)
// Each calculation consist of exactly one operation and two numbers
// The most outer function represents the left operand, the most inner function represents the right operand

// 3. Initial solution( complexity: time=>O() space=>O())

function zero(str) {
  return str ? eval(0 + str) : 0;
}
function one(str) {
  return str ? eval(1 + str) : 1;
}
function two(str) {
  return str ? eval(2 + str) : 2;
}
function three(str) {
  return str ? eval(3 + str) : 3;
}
function four(str) {
  return str ? eval(4 + str) : 4;
}
function five(str) {
  return str ? eval(5 + str) : 5;
}
function six(str) {
  return str ? eval(6 + str) : 6;
}
function seven(str) {
  return str ? eval(7 + str) : 7;
}
function eight(str) {
  return str ? eval(8 + str) : 8;
}
function nine(str) {
  return str ? eval(9 + str) : 9;
}

function plus(num) {
  return '+' + num;
}
function minus(num) {
  return '-' + num;
}
function times(num) {
  return '*' + num;
}
function dividedBy(num) {
  return '/' + num;
}

// 4. Improved solution( complexity: time=>O() space=>O() )

const n = digit => op => op ? op(digit) : digit;
const zero = n(0);
const one = n(1);
const two = n(2);
const three = n(3);
const four = n(4);
const five = n(5);
const six = n(6);
const seven = n(7);
const eight = n(8);
const nine = n(9);
const plus = r => l => l + r;
const minus = r => l => l - r;
const times = r => l => l * r;
const dividedBy = r => l => l / r;


['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine'].forEach((num, i) => {
	this[num] = op => op ? op(i) : i;
})
const plus = r => l => l + r;
const minus = r => l => l - r;
const times = r => l => l * r;
const dividedBy = r => l => l / r;