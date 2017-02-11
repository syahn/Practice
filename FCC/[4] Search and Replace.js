// 1. Reflection

// - I solved it.
// - Learn how to use Regex.

// 2. Problem

// Perform a search and replace on the sentence using the arguments provided and return the new sentence.
//
// First argument is the sentence to perform the search and replace on.
//
// Second argument is the word that you will be replacing (before).
//
// Third argument is what you will be replacing the second argument with (after).
//
// NOTE: Preserve the case of the original word when you are replacing it.
// For example if you mean to replace the word "Book" with the word "dog", it should be replaced as "Dog"

// 3. Initial solution

function myReplace(str, before, after) {
  let newStr = str.split(' ');
  let newCase = /[A-Z]/.test(before[0]) ? after[0].toUpperCase() + after.slice(1) : after;
  newStr.splice(newStr.indexOf(before), 1, newCase);
  return newStr.join(' ');
}


// 4. Improved solution

function myReplace(str, before, after) {
  let newCase = /[A-Z]/.test(before[0]) ? after[0].toUpperCase() + after.slice(1) : after;
  return str.replace(before, newCase);
}
