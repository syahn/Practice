// # Reflection

// - Recursive is amazing!

// # Problem

// You are given the pointer to the head node of a linked list and you need to
// print all its elements in reverse order from tail to head, one element per line.
// The head pointer may be null meaning that the list is empty - in that case,
// do not print anything!


// # Initial solution

void ReversePrint(Node *head)
{
  if(head != NULL){
    ReversePrint(head->next);
    cout << head->data << '\n';
  }
}


// # Improved solution
