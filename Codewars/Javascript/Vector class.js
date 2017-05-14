// 1. Reflection

// - Failed. 
// - I couldn't satisfy one test. 
// - Knowing difference between prototypical method and naive method.


// 2. Problem

// Create a Vector object that supports addition, subtraction, dot products, and norms. So, for example:

// var a = new Vector([1,2,3]);
// var b = new Vector([3,4,5]);
// var c = new Vector([5,6,7,8]);
// a.add(b); // should return Vector([4,6,8])
// a.subtract(b); // should return Vector([-2,-2,-2])
// a.dot(b); // should return 1*3+2*4+3*5 = 26
// a.norm(); // should return sqrt(1^2+2^2+3^2)=sqrt(14)
// a.add(c); // throws an error
// If you try to add, subtract, or dot two vectors with different lengths, you must throw an error!

// Also provide:

// a toString function, so that using the vectors from above, a.toString() === '(1,2,3)' (in Python, this is a __str__ method, so that str(a) == '(1,2,3)')
// an equals function, so that two vectors who have the same components are equal
// The test cases will utilize the user-provided equals method.

// 3. Initial solution( complexity: time=>O() space=>O())


// 4. Improved solution( complexity: time=>O() space=>O() )

var Vector = function (components) {
	this.a = components;
	this.len = components.length;
};

Vector.prototype = {
		add(b) {
			let ret = [];
			if (this.len !== b.len) throw new Error('error');
	  	return new Vector(this.a.map((e, idx) => e + b.a[idx]));
		},
		subtract(b) {
			let ret = [];
			if (this.len !== b.len) throw new Error('error');
	  	return new Vector(this.a.map((e, i) => e - b.a[i]));
		},
		dot(b) {
			if (this.len !== b.len) throw new Error('error');
	  	return this.a.reduce((a, c, i) => a + c * b.a[i], 0);
		},
		norm() {
	  	return Math.sqrt(this.a.reduce((a, c) => a += Math.pow(c,2), 0), 2);
  	},
  	toString() {
  		return `(${this.a.toString()})`
  	}, 
  	equals(b) {
  		if (this.len !== b.len) return false;
		 return this.a.every((x,i) => x === b.a[i]);
  	}
};