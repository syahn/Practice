// 1. Reflection

// - I solved it with help.
// - I couldn't understand one asterisk to double pointer variable.

// 2. Problem

// Given a linked list, swap every two adjacent nodes and return its head.
// For example,
// Given 1234, you should return the list as 2143.
// Your algorithm should use only constant space. You may not modify the values in
// the list, only nodes itself can be changed.

// 3. Initial solution( complexity: time=>O(n) space=>O(1))

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode *p = head, *q = head->next, *r = head->next->next, *dummy = head->next;
        while(head){
            q->next = p;
            p->next = r;
            if(r && r->next){
                p->next = r->next;
                p = r;
                q = r -> next;
                r = r -> next -> next;
            } else break;
        }
        return dummy;
    }
};
// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

ListNode* swapPairs(ListNode* head) {
    ListNode **pp = &head, *a, *b;
    while ((a = *pp) && (b = a->next)) {
        a->next = b->next;
        b->next = a;
        *pp = b;
        pp = &(a->next);
    }
    return head;
}
