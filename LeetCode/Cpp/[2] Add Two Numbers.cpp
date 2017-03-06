// 1. Reflection

// - I failed to solve it.
// - Key point was adding 0. I didn't come up with this.

// 2. Problem

// You are given two linked lists representing two non-negative numbers.
// The digits are stored in reverse order and each of their nodes contains a single digit.
// Add the two numbers and return it as a linked list.

// 3. Initial solution( complexity: time=>O(n) space=>O(1))

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        int carry = 0;
        while(l1 != NULL || l2 != NULL){
            int x = l1 != NULL ? l1->val : 0;
            int y = l2 != NULL ? l2->val : 0;
            int digits = carry + x + y;
            carry = digits / 10;
            tail->next = new ListNode(digits % 10);
            tail = tail->next;
            if(l1 != NULL) l1 = l1->next;
            if(l2 != NULL) l2 = l2->next;
        }
        if(carry > 0){
            tail->next = new ListNode(1);
        }
        return dummy.next;
    }
};

// 4. Improved solution( complexity: time=>O() space=>O() )

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode dummy(0), *tail = &dummy;
            int carry = 0;
            while(l1 || l2 || carry){
                int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
                carry = sum / 10;
                tail->next = new ListNode(sum % 10);
                tail = tail->next;
                if(l1 != NULL) l1 = l1->next;
                if(l2 != NULL) l2 = l2->next;
            }
            return dummy.next;
        }
};
