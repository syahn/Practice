// # Reflection

// - Note to the condition for recursion that I have to consider base case too.
//   At first, I didn't reckon when it could terminate by itself.

// # Problem
//
// You're given the pointer to the head node of a sorted linked list, where the 
// data in the nodes is in ascending order. Delete as few nodes as possible so
// that the list does not contain any value more than once. The given head pointer
// may be null indicating that the list is empty.
//
// For now do not be concerned with the memory deallocation. In common abstract
// data structure scenarios, deleting an element might also require deallocating
// the memory occupied by it. For an initial intro to the topic of dynamic memory
// please consult: http://www.cplusplus.com/doc/tutorial/dynamic/



// # Initial solution


Node* RemoveDuplicates(Node *head)
{
    if(head == NULL) return NULL;
    Node* nextItem = head->next;

    while(nextItem != NULL && head->data == nextItem->data){
        nextItem = nextItem->next;
    }
    head->next = RemoveDuplicates(nextItem);
    return head;
}


// # Improved solution
