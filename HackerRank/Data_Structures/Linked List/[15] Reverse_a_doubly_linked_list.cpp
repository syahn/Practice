// # Reflection

// - I couldn't solve it with recursion. So I referred to other solutions how it
//   could be achieved. It was quite good practice to understand recursion and relation
//   with stack.
// - Let's solve it one more time. 


// # Problem

// You’re given the pointer to the head node of a doubly linked list. Reverse the
// order of the nodes in the list. The head node might be NULL to indicate that
// the list is empty.


// # Initial solution

Node* Reverse(Node* head) {
    if (head == NULL || head->next == NULL){
        return head;
    }

    Node* nextNode = head->next;
    Node* newHead = Reverse(nextNode);
    nextNode->prev = nextNode->next;
    nextNode->next = head;
    head->prev = head->next;
    head->next = NULL;

    return newHead;
}

// # Improved solution
