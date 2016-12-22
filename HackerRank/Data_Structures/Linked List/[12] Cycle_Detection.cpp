// # Reflection

// - At first, I thought it has bigger size of the gap than 2. But it turns out,
//   it has just gap as 2.
// - It could be solved with runner technic.


// # Problem

// A linked list is said to contain a cycle if any node is visited more than once
// while traversing the list.
//
// Complete the function provided for you in your editor. It has one parameter:
// a pointer to a Node object named  that points to the head of a linked list.
// Your function must return a boolean denoting whether or not there is a cycle
// in the list. If there is a cycle, return true; otherwise, return false.


// # Initial solution

bool has_cycle(Node* head) {
    if(head == NULL) return false;
        Node* runner = head;
        Node* follower = head;
        int count = 0;
        int gap = 2;
        while(runner != NULL){
            runner = runner->next->next;
            if(runner == follower) return true;
            follower = follower->next;
        }
    return false;
}




// # Improved solution
