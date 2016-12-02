// # Reflection

// - A lot of linked list problems could be solved by recursive in a elegant way!

// # Problem

// You’re given the pointer to the head node of a linked list and the position of
// a node to delete. Delete the node at the given position and return the head node.
// A position of 0 indicates head, a position of 1 indicates one node away
// from the head and so on. The list may become empty after you delete the node.


// # Initial solution

Node* Delete(Node *head, int position)
{
  Node* run = head;
  Node* pre = head;

  if(head==NULL) return NULL;
  if(!position) {
      head = head->next;
      delete run;
      return head;
  }
  while(position--){
      pre=run;
      run=run->next;
  }

  pre->next = run->next;
  delete run;
  return head;
}


// # Improved solution

Node* Delete(Node *head, int position) {
    if (position == 0) return head->next;
    head->next = Delete(head->next, position-1);
    return head;
}
