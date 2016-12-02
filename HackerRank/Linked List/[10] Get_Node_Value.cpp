// # Reflection

// - Giving space between lead and tail could be established by for loop + unary
//   operator. 

// # Problem

// You’re given the pointer to the head node of a linked list and a specific
// position. Counting backwards from the tail node of the linked list, get the
// value of the node at the given position. A position of 0 corresponds to the
// tail, 1 corresponds to the node before the tail and so on.


// # Initial solution

int GetNode(Node *head,int positionFromTail)
{
    Node* middle= NULL;
    Node* tail;
    while(head != NULL){
        tail = middle;
        middle = head;
        head = head->next;
        middle->next = tail;
    }
    while(positionFromTail--){
        middle = middle->next;
    }
    return middle->data;
}

// # Improved solution

int GetNode(Node *head,int positionFromTail)
{
    int index = 0;
    Node* current = head;
    Node* result = head;
    while(current!=NULL)
    {
        current=current->next;
        if (index++>positionFromTail)
        {
            result=result->next;
        }
    }
    return result->data;
}
