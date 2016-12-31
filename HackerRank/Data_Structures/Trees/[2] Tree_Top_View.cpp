// # Reflection

// - My solution was more simple, but editorial has more beauty in completeness.

// # Problem
//
// You are given a pointer to the root of a binary tree. Print the top view of the binary tree.
// You only have to complete the function.
// For example :
//
//      3
//    /   \
//   5     2
//  / \   / \
// 1   4 6   7
//  \       /
//   9     8
// Top View : 1 -> 5 -> 3 -> 2 -> 7


// # Initial solution

/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void leftPrint(node * root){
    if(root == NULL) return ;
    leftPrint(root->left);
    cout << root->data << " ";
}

void top_view(node * root)
{
    leftPrint(root);
    while(root->right!=NULL){
        root = root->right;
        cout << root->data << " ";
    }
}
// # Improved solution

void go_left(node* n) {
    if(n->left != NULL) {
        go_left(n->left);
    }
    cout << n->data << " ";
}

void go_right(node* n) {
    cout << n->data << " ";
    if(n->right != NULL) {
        go_right(n->right);
    }
}

void top_view(node* root) {
    if(root->left != NULL) {
        go_left(root->left);
    }
    cout << root->data << " ";
    if(root->right != NULL) {
        go_right(root->right);
    }
}
