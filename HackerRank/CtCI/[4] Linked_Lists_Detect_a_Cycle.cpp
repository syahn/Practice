// # Reflection

// - I solved this at a time.
// - Allocating two nodes with different speed is good idea.
// - I could be solved with set STL too.

// # Problem

// A linked list is said to contain a cycle if any node is visited more than once
// while traversing the list.
//
// Complete the function provided in the editor below. It has one parameter:
// a pointer to a Node object named that points to the head of a linked list.
// Your function must return a boolean denoting whether or not there is a cycle in the list.
// If there is a cycle, return true; otherwise, return false.

// Note: If the list is empty,  will be null.


// # Initial solution

bool has_cycle(Node* head) {
    if(head == NULL) return false;
    Node* slow = head;
    Node* fast = head->next;

    while(slow != fast){
        if(fast == NULL || fast->next == NULL) return false;
        fast = fast->next->next;
        slow = slow->next;
    }
    return true;
}

// # Other solution

#include <set>

bool has_cycle(Node* head) {
    set<Node *> det;
    if (head == NULL) return false;
    while (head != NULL) {
        if (det.find(head) != det.end()) return true;
        det.insert(head);
        head = head->next;
    }
    return false;
}
