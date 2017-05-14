// 1. Reflection

// - Solved. It's easy.
// - I became to know about the difference between bracket access and chatAt when I access 
  // to string primitive.

// 2. Problem

// Jaden Smith, the son of Will Smith, is the star of films such as The Karate Kid (2010) and After Earth (2013). Jaden is also known for some of his philosophy that he delivers via Twitter. When writing on Twitter, he is known for almost always capitalizing every word.

// Your task is to convert strings to how they would be written by Jaden Smith. The strings are actual quotes from Jaden Smith, but they are not capitalized in the same way he originally typed them.

// Example:

// 3. Initial solution( complexity: time=>O() space=>O())

String.prototype.toJadenCase = function () {
	return this.split(' ').map(e => e[0].toUpperCase() + e.slice(1)).join(' ');
};


// 4. Improved solution( complexity: time=>O() space=>O() )

String.prototype.toJadenCase = function () {
	return this.split(' ').map(e => e.charAt(0).toUpperCase() + e.slice(1)).join(' ');
};