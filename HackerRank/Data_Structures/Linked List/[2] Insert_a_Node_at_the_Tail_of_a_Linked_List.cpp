// # Reflection

// - Simple problem


// # Problem

// You are given the pointer to the head node of a linked list and an integer to
// add to the list. Create a new node with the given integer. Insert this node at
// the tail of the linked list and return the head node. The given head pointer may
// be null, meaning that the initial list is empty.


// # Initial solution

Node* Insert(Node *head,int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        return temp;
    }

    Node* run = head;
    while(run->next != NULL){
        run = run->next;
    }
    run->next = temp;
    return head;
}


// # Improved solution
