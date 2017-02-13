// 1. Reflection

// - I solve it.
// - slice vs substr
//   -> if you know the index(the position) on which you'll stop (but NOT include), Use slice()
//      if you know the length of characters to be extracted use substr().
// - Need to study regex.


// 2. Problem

// Translate the provided string to pig latin.
//
// Pig Latin takes the first consonant (or consonant cluster) of an English word,
// moves it to the end of the word and suffixes an "ay".
//
// If a word begins with a vowel you just add "way" to the end.
//
// Input strings are guaranteed to be English words in all lowercase.


// 3. Initial solution

function translatePigLatin(str) {
  if(['a','e','i','o','u'].indexOf(str[0]) > -1){
    return str + 'way';
  } else {
    let arrStr = str.split(''), idx = 0;
    for(let i=0; i<arrStr.length; i++, idx++){
      if(['a','e','i','o','u'].indexOf(arrStr[i]) < 0){
        str += arrStr[i];
      } else break;
    }
    return str.slice(idx) + 'ay';
  }
}

// 4. Improved solution
