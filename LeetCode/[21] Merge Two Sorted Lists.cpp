// 1. Reflection

// - I failed. 
// - I have not solved Linkedlist problems for a while, so it's like recovery problem.
// - Recursive version might have stack overflow. It's not good solution in practice.


// 2. Problem

// Merge two sorted linked lists and return it as a new list.
// The new list should be made by splicing together the nodes of the first two lists.

// 3. Initial solution( complexity: time=>O(n) space=>O(1))

// Iteration
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(INT_MIN);
        ListNode* tail = &dummy;
        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
                tail->next = l1;
                l1 = l1->next;
            }else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        tail->next = l1 ? l1 : l2;
        return dummy.next;
    }
};


// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

// Recursive
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL){
            return l2;
        } else if(l2 == NULL){
            return l1;
        }
        if(l1->val <= l2->val){
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};
