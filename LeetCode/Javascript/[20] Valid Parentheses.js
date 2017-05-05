// 1. Reflection

// - Solved. 

// 2. Problem

// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

// Subscribe to see which companies asked this question.

// 3. Initial solution( complexity: time=>O(N) space=>O(N))

/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let stack = [];
    let open = '{([', close = '})]';
    for (let i = 0; i < s.length; i++) {
        let openIdx = open.indexOf(s.charAt(i)),
            closeIdx = close.indexOf(s.charAt(i));
        if (openIdx > -1) {
            stack.push(openIdx);
        } else if (closeIdx > -1) {
            if (stack[stack.length - 1] === closeIdx) {
                stack.pop();
            } else {
                return false;
            }
        }
    }
    
    if (stack.length) return false;
    return true;
};

// 4. Improved solution( complexity: time=>O(N) space=>O(N) )

// It's better in readability
var isValid = function(s) {
    let stack = [];
    for (let i = 0; i < s.length; i++) {
        let char = s.charAt(i);
        if (char === '{') stack.push('}');
        else if (char === '(') stack.push(')');
        else if (char === '[') stack.push(']');
        else if (stack.pop() !== char) return false;
    }
    return stack.length === 0;
};