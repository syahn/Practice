// # Reflection

// - I tried to solve it with recursion at first, and it worked;
// - In improved version, I deleted additional allocation of node, it made the solution
//   more simple and neat;


// # Problem

// You’re given the pointer to the head nodes of two sorted linked lists.
// The data in both lists will be sorted in ascending order.
//  Change the next pointers to obtain a single, merged linked list which also has
//  data in ascending order. Either head pointer given may be null meaning that the
//  corresponding list is empty.


// # Initial solution


Node* MergeLists(Node* headA, Node* headB){
  Node* head =  new Node();
  Node* first = head;
  if(headA == NULL){
      return headB;
  } else if(headB == NULL){
      return headA;
  }
  if(headA->data >= headB->data){
      head->data = headB->data;
      head->next = MergeLists(headA, headB->next);
  } else {
      head->data = headA->data;
      head->next = MergeLists(headA->next, headB);
  }
  return first;
}

// # Improved solution

Node* MergeLists(Node* headA, Node* headB){
  if(headA == NULL){
      return headB;
  } else if(headB == NULL){
      return headA;
  }
  if(headA->data <= headB->data){
      headA->next = MergeLists(headA->next, headB);
      return headA;
  } else {
      headB->next = MergeLists(headA, headB->next);
      return headB;
  }
}
