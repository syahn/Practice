// # Reflection

// - Recursive version is hard to understand but elegant.


// # Problem

// You’re given the pointer to the head node of a linked list.
// Change the next pointers of the nodes so that their order is reversed.
// The head pointer given may be null meaning that the initial list is empty.


// # Initial solution

Node* Reverse(Node *head){
    if(head == NULL) return NULL;
    else {
        Node* middle = NULL;
        Node* tail;
        while(head != NULL){
                tail = middle;
                middle = head;
                head = head->next;
                middle->next = tail;
            }
        return middle;
    }
}


// # Improved solution(Recursive version);

Node* Reverse(Node *head)
{
    // The tail of the list has been reached which
    // will now be the new head of the reversed list
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* nextNode = head->next;
    head->next = NULL;
    Node* newHead = Reverse(nextNode);
    // reverse the nodes
    nextNode->next = head;
    return newHead;
}
