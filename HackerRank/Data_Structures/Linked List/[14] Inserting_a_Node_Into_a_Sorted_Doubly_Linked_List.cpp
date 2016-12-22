// # Reflection

// - At first, I misunderstood the problem, head was not a just node to point to the
//   first node, but it's actually first node.


// # Problem

// Given a reference to the head of a doubly-linked list and an integer, ,
// create a new Node object having data value  and insert it into a sorted linked list.
//
// Complete the Node* SortedInsert(Node* head, int data) method in the editor below.
// It has two parameters:
//
// : A reference to the head of a doubly-linked list of Node objects.
// : An integer denoting the value of the  field for the Node you must insert into
// the list.
// The method must insert a new Node into the sorted (in ascending order)
// doubly-linked list whose data value is  without breaking any of the list's double
// links or causing it to become unsorted.
//
// Note: Recall that an empty list (i.e., where ) and a list with one element are
// sorted lists.



// # Initial solution

Node* SortedInsert(Node *head,int data)
{
    if(head == NULL){
        Node* temp = new Node();
        temp->data = data;
        temp->next = NULL;
        temp->prev = NULL;
        return temp;
    }

    if(head->data <= data){
        head->next = SortedInsert(head->next, data);
        head->next->prev = head; //important part

    } else if (head->data > data){
        Node* temp = new Node();
        temp->data = data;
        temp->next = head;
        temp->prev = head->prev;
        head->prev = temp;
        head = temp;
    }

    return head;
}


// # Improved solution
