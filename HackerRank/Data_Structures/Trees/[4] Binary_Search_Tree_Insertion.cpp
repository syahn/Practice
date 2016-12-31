// # Reflection

// - I tried to solve it with while loop first and recursively.
// - It took a lot of time because I didn't write correect variable names.
// - There are other type of problem that I don't need to return root node. It
//   would be simpler.

// # Problem

// You are given a pointer to the root of a binary search tree and a value to be
// inserted into the tree. Insert this value into its appropriate position in the
// binary search tree and return the root of the updated binary tree. 
// You just have to complete the function.


// # Initial solution

node * insert(node * root, int value)
{
    node * head = root;

    node * newNode = new node;
    newNode->data = value;
    newNode->left = newNode->right = NULL;

    if(head == NULL) {
        return newNode;
    } else {
        while(head != NULL){
            if(head->data > value ){
                if(head->left == NULL) {
                    head->left = newNode;
                    break;
                }
                head = head->left;
            } else if(head->data < value) {
                if(head->right == NULL){
                    head->right = newNode;
                    break;
                }
                head = head->right;
            }
        }
    }
   return root;
}


// # Improved solution

node * insert(node * root, int value)
{
    if(root == NULL) {
        node * root = new node;
        root->data = value;
        root->left = root->right = NULL;
        return root;
    } else if(root->data > value){
            root->left = insert(root->left, value);
    } else {
            root->right = insert(root->right, value);
    }

   return root;
}
