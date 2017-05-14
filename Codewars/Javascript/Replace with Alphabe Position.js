// 1. Reflection

// - Solved it.
// - Being a great javascript developer, I should know Regex well. Period.

// 2. Problem

// Description:
//
// Welcome. In this kata you are required to, given a string, replace every letter with its position in the alphabet. If anything in the text isn't a letter, ignore it and don't return it. a being 1, b being 2, etc. As an example:
//
// alphabet_position("The sunset sets at twelve o' clock.")
// Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" (As a string.)


// 3. Initial solution( complexity: time=>O(n) space=>O(1))

function alphabetPosition(text) {
  return text.split('').map( c => {
    if(typeof c === 'string'){
      return c.toUpperCase().charCodeAt(0) - 64;
    }
  }).filter(c => { if(c > 0 && c < 27) return c }).join(' ');
}

function alphabetPosition(text) {
  return text.toUpperCase()
  .split('').map( c => {
    return c.charCodeAt(0) - 64;
  })
  .filter(c => { if(c > 0 && c < 27) return c; })
  .join(' ');
}



// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

function alphabetPosition(text) {
  return text.match(/[a-zA-Z]/g).map( (el) => el.toLowerCase().charCodeAt() - 96 ).join(' ');
}
