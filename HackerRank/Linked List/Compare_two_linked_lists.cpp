// # Reflection

// - Try to Use recursive first.
// - Remember the potential of three ||.

// # Problem

// You’re given the pointer to the head nodes of two linked lists.
// Compare the data in the nodes of the linked lists to check
// if they are equal. The lists are equal only if they have the same number of nodes
// and corresponding nodes contain the same data. Either head pointer given may be
// null meaning that the corresponding list is empty.

// # Initial solution

int CompareLists(Node *headA, Node* headB){
    if(headA == NULL || headB == NULL) return 0;
    else{
        while(headA->next != NULL && headB->next != NULL ){
            if(headA->data != headB->data) return 0;
            headA = headA->next;
            headB = headB->next;
        }
        if(headA->next == NULL && headB->next == NULL){
            if(headA->data == headB->data) return 1;
            else return 0;
        } else return 0;
    }
}


// # Improved solution

int CompareLists(Node headA, Node headB) {
    if (headA == null && headB == null) return 1;
    if (headA == null || headB == null || headA.data != headB.data) return 0;
    return CompareLists(headA.next, headB.next);
}
