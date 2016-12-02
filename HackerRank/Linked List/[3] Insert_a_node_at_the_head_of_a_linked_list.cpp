// # Reflection

// - Think simply.


// # Problem

// You’re given the pointer to the head node of a linked list and an integer to
// add to the list. Create a new node with the given integer, insert this node
// at the head of the linked list and return the new head node. The head pointer
// given may be null meaning that the initial list is empty.




// # Initial solution

Node* Insert(Node *head,int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if(head==NULL) return temp;

    temp->next = head;

    return temp;
}


// # Improved solution

Node* Insert(Node *head,int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;

    return temp;
}
