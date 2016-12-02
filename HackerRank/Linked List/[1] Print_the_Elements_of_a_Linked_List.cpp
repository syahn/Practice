// # Reflection

// - Got a hang of how recursive works in the linked lists.


// # Problem

// If you're new to linked lists, this is a great exercise for learning about them.
// Given a pointer to the head node of a linked list, print its elements in order,
// one element per line. If the head pointer is null (indicating the list is empty),
//  don’t print anything.


// # Initial solution

void Print(Node *head)
{
    while(head != NULL){
        cout << head->data <<'\n';
        head = head->next;
    }
}


// # Improved solution

void Print(Node *head)
{
    if(head != NULL){
        cout << head->data << '\n';
        Print(head->next);
    }
}
