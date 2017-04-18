// 1. Reflection

// -Solved
// - When converting string to number, try to use + prefix

// 2. Problem

// A digital root is the recursive sum of all the digits in a number.
// Given n, take the sum of the digits of n. If that value has two digits,
// continue reducing in this way until a single-digit number is produced.
// This is only applicable to the natural numbers.

// Here's how it works (Ruby example given):

// 3. Initial solution( complexity: time=>O(N) space=>O(1))

function digital_root(n) {
  if (n / 10 < 1) return n;
  return digital_root(
    n.toString().split("").reduce((a, c) => Number(a) + Number(c), 0)
  );
}

// 4. Improved solution( complexity: time=>O() space=>O() )

function digital_root(n) {
  if (n / 10 < 1) return n;
  return digital_root(n.toString().split("").reduce((a, c) => a + +c, 0));
}
