// # Reflection

// - When finding specific location of the linked list, it would be better to track
// previous node of what I want to find, so that I could keep getting control of list.

// # Problem

// You’re given the pointer to the head node of a linked list, an integer to add to
// the list and the position at which the integer must be inserted. Create a new node
//  with the given integer, insert this node at the desired position and return the
//  head node. A position of 0 indicates head, a position of 1 indicates one node
//  away from the head and so on. The head pointer given may be null meaning that
//  the initial list is empty.



// # Initial solution

Node* InsertNth(Node *head, int data, int position)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if(head==NULL) return temp;

    Node* run = head;
    Node* pre = head;
    if(!position){
        temp->next = head;
        return temp;
    }
    for(int i=0; i<position; ++i){
        pre = run;
        run = run->next;
    }
    temp->next = run;
    pre->next = temp;

    return head;
}


// # Improved solution

Node* InsertNth(Node *head, int data, int position)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    Node* run = head;

    if(position == 0){
        temp->next = head;
        return temp;
    }

    for(int i=1; i<position; ++i){
        run = run->next;
    }
    temp->next = run->next;
    run->next = temp;

    return head;
}
