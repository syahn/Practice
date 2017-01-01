// # Reflection

// - I assumed the origin intention of the problem is just to check whether it has 
// duplicate value next to the current node. But, I thought the case that the first
// node and last node is same. So, I overkilled the problem.

// # Problem

// Task
// A Node class is provided for you in the editor. A Node object has an integer data field,
// , and a Node instance pointer, , pointing to another node (i.e.: the next node in a list).
//
// A removeDuplicates function is declared in your editor, which takes a pointer
// to the  node of a linked list as a parameter. Complete removeDuplicates so that
// it deletes any duplicate nodes from the list and returns the head of the updated list.
//
// Note: The  pointer may be null, indicating that the list is empty.
// Be sure to reset your  pointer when performing deletions to avoid breaking the list.



// # Initial solution

Node* removeDuplicates(Node *head)
{
    vector<Node *> arr;
    Node * root = head;
    while(head != NULL){
        bool hasVal = false;
        int temp = head->data;

        for(int i = 0 ; i<arr.size(); i++){
          if(arr[i]->data == temp){
            hasVal = true;
            break;
          }
        }
        if(!hasVal) arr.push_back(head);
        head = head->next;
    }
    for(int i=0; i<arr.size(); ++i){
        arr[i]->next =  arr[i+1];
    }
    arr[arr.size()-1]->next = NULL;

    return arr[0];
}

// # Improved solution
