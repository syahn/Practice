// 1. Reflection

// - solved. 
// _ With this problem, I understood how to reverse linked list perfectly

// 2. Problem

// Given a singly linked list, determine if it is a palindrome.

// Follow up:
// Could you do it in O(n) time and O(1) space?

// 3. Initial solution( complexity: time=>O(N) space=>O(N))

var isPalindrome = function(head) {
   let arr = [];
   while(head) {
       arr.push(head.val);
       head = head.next;
   }
   return arr.join('') === arr.reverse().join('');
};

// 4. Improved solution( complexity: time=>O(N) space=>O(1) )

/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function(head) {
   let tail = head, follow = head;
   
   while(head && head.next) {
     head = head.next.next;
     follow = follow.next;
   }
   follow = reverse(follow);
   while(follow) {
       if (tail.val !== follow.val) return false;
       tail = tail.next;
       follow = follow.next;
   }
   return true;
};

const reverse = node => {
    let prev = null;
    while(node) {
        let next = node.next;
        node.next = prev;
        prev = node;
        node = next;
    }
    return prev;
}