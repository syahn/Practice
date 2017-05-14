// 1. Reflection

// - Solved. 

// 2. Problem

// This time no story, no theory. The examples below show you how to write function accum:

// Examples:

// accum("abcd");    // "A-Bb-Ccc-Dddd"
// accum("RqaEzty"); // "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
// accum("cwAt");    // "C-Ww-Aaa-Tttt"
// The parameter of accum is a string which includes only letters from a..z and A..Z.

// 3. Initial solution( complexity: time=>O() space=>O())

function accum(s) {
  return s
    .split("")
    .map((e, i) => e[0].toUpperCase() + e.toLowerCase().repeat(i))
    .join("-");
}

// 4. Improved solution( complexity: time=>O() space=>O() )
