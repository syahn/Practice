// # Reflection

// - I couldn't solve it by myself. At first, I tried to solve it with recursion,
   // but it didn't work well.
   // - Idea for these two runners made the problem quite simple.


// # Problem

// Given pointers to the head nodes of  linked lists that merge together at some
// point, find the Node where the two lists merge. It is guaranteed that the two
// head Nodes will be different, and neither will be NULL.
//
// In the diagram below, the two lists converge at Node x:
//
// [List #1] a--->b--->c
//                      \
//                       x--->y--->z--->NULL
//                      /
//      [List #2] p--->q
//
// Complete the int FindMergeNode(Node* headA, Node* headB) method so that it finds
//  and returns the data value of the Node where the two lists merge.


// # Initial solution

int FindMergeNode(Node *headA, Node *headB)
{
    Node* walkA = headA;
    Node* walkB = headB;

    while(walkA != walkB){
        if(walkA->next == NULL){
            walkA = headB;
        } else {
            walkA = walkA->next;
        }
        if(walkB->next == NULL){
            walkB = headA;
        } else {
            walkB = walkB->next;
        }
    }
    return walkA->data;
}



// # Improved solution
