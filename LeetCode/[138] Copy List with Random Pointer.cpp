// 1. Reflection

// - I came up with ideas and almost implemented it, but couldn't pass it.
// - It could be solved in O(n) with space complexity of O(n) or O(1).


// 2. Problem

// A linked list is given such that each node contains an additional random pointer
// that could point to any node in the list or null.
// Return a deep copy of the list.

// 3. Initial solution( complexity: time=>O(n) space=>O(n))

class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(head == NULL) return NULL;
        RandomListNode *dummy = new RandomListNode(0);
        RandomListNode *p = dummy, *t = head;
        unordered_map<RandomListNode*, RandomListNode*> hash;
        while (t != NULL){
            p->next = new RandomListNode(t->label);
            hash[t] = p->next;
            p = p->next;
            t = t->next;
        }
        t = head;
        p = dummy;
        while(t != NULL){
            p->next->random = hash[t->random];
            p = p->next;
            t = t->next;
        }
        return dummy->next;
    }
};

// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

public RandomListNode copyRandomList(RandomListNode head) {
	RandomListNode iter = head, next;

	// First round: make copy of each node,
	// and link them together side-by-side in a single list.
	while (iter != null) {
		next = iter.next;

		RandomListNode copy = new RandomListNode(iter.label);
		iter.next = copy;
		copy.next = next;

		iter = next;
	}

	// Second round: assign random pointers for the copy nodes.
	iter = head;
	while (iter != null) {
		if (iter.random != null) {
			iter.next.random = iter.random.next;
		}
		iter = iter.next.next;
	}

	// Third round: restore the original list, and extract the copy list.
	iter = head;
	RandomListNode pseudoHead = new RandomListNode(0);
	RandomListNode copy, copyIter = pseudoHead;

	while (iter != null) {
		next = iter.next.next;

		// extract the copy
		copy = iter.next;
		copyIter.next = copy;
		copyIter = copy;

		// restore the original list
		iter.next = next;

		iter = next;
	}

	return pseudoHead.next;
}
