// 1. Reflection

// - I solved it, it's easy but I realized I didn't understand prototypical chain fully. 

// 2. Problem

// Fill in the object constructor with the following methods below:
//
// getFirstName()
// getLastName()
// getFullName()
// setFirstName(first)
// setLastName(last)
// setFullName(firstAndLast)
// Run the tests to see the expected output for each method.
//
// The methods that take an argument must accept only one argument and it has to be a string.
//
// These methods must be the only available means of interacting with the object.

// 3. Initial solution

//jshint esversion: 6
var Person = function(firstAndLast) {
  let firstName = firstAndLast.split(' ')[0],
      lastName = firstAndLast.split(' ')[1],
      fullName = firstName + ' ' + lastName;
  this.getFirstName = () => firstName;
  this.getLastName = () => lastName;
  this.getFullName = () => fullName;
  this.setFirstName = (first) => {
    firstName = first;
    fullName = firstName + ' ' + lastName;
  };
  this.setLastName = (last) => {
    lastName = last;
    fullName = firstName + ' ' + lastName;
  };
  this.setFullName = (firstAndLast) => {
    firstName = firstAndLast.split(' ')[0];
    lastName = firstAndLast.split(' ')[1];
    fullName = firstName + ' ' + lastName;
  };
};

var bob = new Person('Bob Ross');
bob.getFullName();


// 4. Improved solution
