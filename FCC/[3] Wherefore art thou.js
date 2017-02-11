// 1. Reflection

// - I solved with one hint.
// - filter + every combination is quite powerful.
// - Improved one could be called 'functional';

// 2. Problem

// Make a function that looks through an array of objects (first argument) and
// returns an array of all objects that have matching property and value pairs
// (second argument). Each property and value pair of the source object has to be
// present in the object from the collection if it is to be included in the returned array.
//
// For example, if the first argument is [{ first: "Romeo", last: "Montague" },
// { first: "Mercutio", last: null }, { first: "Tybalt", last: "Capulet" }],
// and the second argument is { last: "Capulet" }, then you must return the third
// object from the array (the first argument), because it contains the property
// and its value, that was passed on as the second argument.

// 3. Initial solution

function whatIsInAName(collection, source) {
  const sourceArr = Object.keys(source);
  return  collection.filter((obj)=>{
    for (let i=0; i<sourceArr.length;i++){
      if(!obj.hasOwnProperty(sourceArr[i]) || source[sourceArr[i]] !== obj[sourceArr[i]] ){
        return false;
      }
    }
   return true;
  });
}

// 4. Improved solution

function whatIsInAName(collection, source) {
 const sourceArr = Object.keys(source);
 return  collection.filter((obj)=>{
   return sourceArr.every((val)=>{
     return obj.hasOwnProperty(val) && source[val] === obj[val] ;
   });
  });
}
