// # Reflection



// # Problem

// A Node class is provided for you in the editor. A Node object has an integer data field,
// , and a Node instance pointer, , pointing to another node (i.e.: the next node in a list).
//
// A Node insert function is also declared in your editor. It has two parameters: a pointer,
// , pointing to the first node of a linked list, and an integer  value that must be
// added to the end of the list as a new Node object.
//
// Task
// Complete the insert function in your editor so that it creates a new Node
// (pass  as the Node constructor argument) and inserts it at the tail of the linked
// list referenced by the  parameter. Once the new node is added, return the reference to the  node.




// # Initial solution

#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

////////////solution////////////////
Node* insert(Node *head,int data)
{
    Node* newNode = new Node(data);
    Node* tail = head;
    if(head != NULL){
      while(tail->next != NULL){
          tail = tail->next;
      }
      tail->next = newNode;
      return head;
    } else {
        return newNode;
    }
}


// # Improved solution
