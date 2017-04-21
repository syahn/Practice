// 1. Reflection

// - Failed. 
// - there are 2 methods to solve it.

// 2. Problem

// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// push(x) -- Push element x onto stack.
// pop() -- Removes the element on top of the stack.
// top() -- Get the top element.
// getMin() -- Retrieve the minimum element in the stack.

// 3. Initial solution( complexity: time=>O() space=>O())

/**
 * initialize your data structure here.
 */
var MinStack = function() {
    this.item = [];
    this.ordered = [];
};

/** 
 * @param {number} x
 * @return {void}
 */
MinStack.prototype.push = function(x) {
    let len = this.ordered.length;
    let min = len ? this.ordered[len - 1] : x;
    this.item.push(x);
    if(x <= min) {
        this.ordered.push(x);
    }
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function() {
    if (this.item[this.item.length - 1] === this.ordered[this.ordered.length - 1]) {
        this.ordered.pop();
    }
    this.item.pop();
};

/**
 * @return {number}
 */
MinStack.prototype.top = function() {
    return this.item[this.item.length - 1];
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function() {
    return this.ordered[this.ordered.length - 1];
};


// 4. Improved solution( complexity: time=>O() space=>O() )

/**
 * initialize your data structure here.
 */
var MinStack = function() {
    this.item = [];
    this.min = 0;
};

/** 
 * @param {number} x
 * @return {void}
 */
MinStack.prototype.push = function(x) {
    if (this.item.length === 0) this.item.push({a: x, b: x});
    else this.item.push({a: x, b: Math.min(x, this.getMin())});
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function() {
    this.item.pop();
};

/**
 * @return {number}
 */
MinStack.prototype.top = function() {
    return this.item[this.item.length - 1]['a'];
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function() {
    return this.item[this.item.length - 1]['b'];
};
