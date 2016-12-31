// # Reflection

// - I could not solve this by myself. I got the hint of using queue from discussion.
// - Solution is so much better solution. shame on me.
// - Instead of using ordinary queue, using deque would be more powerful.

// # Problem

// You are given a pointer to the root of a binary tree. You need to print the
// level order traversal of this tree. In level order traversal, we visit the nodes
// level by level from left to right.
// You only have to complete the function.
// For example:
//
//          3
//        /   \
//       5     2
//      / \    /
//     1   4  6
// For the above tree, the level order traversal is 3 -> 5 -> 2 -> 1 -> 4 -> 6.




// # Initial solution

#include<queue>
using namespace std;
queue<node *> q;

void LevelOrder(node * root)
{
    node * head = root;

    while(head != NULL){
        cout << head -> data << " ";
        if(head->left != NULL) q.push(head->left);
        if(head->right != NULL) q.push(head->right);
        head = q.front();
        q.pop();
    }
}

// # Improved solution

deque<Node*> treeQueue;

void levelOrder(Node* root){
    if( root ){
        treeQueue.push_back(root);
    }
    while( !treeQueue.empty() ){
        Node* tree = treeQueue.front();
        treeQueue.pop_front();

        cout << tree->data << " ";

        if( tree->left ){
            treeQueue.push_back( tree->left );
        }
        if( tree->right ){
            treeQueue.push_back( tree->right );
        }
    }
}
