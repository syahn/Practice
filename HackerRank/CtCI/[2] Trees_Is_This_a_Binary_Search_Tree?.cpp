// # Reflection

// - Improved solution uses boundary check, and it's better. It can be done with
//   O(logN)

// # Problem

// Complete the function in your editor below, which has parameter: a pointer to
// the root of a binary tree. It must return a boolean denoting whether or
// not the binary tree is a binary search tree. You may have to write one or
// more helper functions to complete this challenge.

// # Initial solution

vector<int> arr;

void traverseInorder(Node* node){
    if(node->left != NULL) traverseInorder(node->left);
    arr.push_back(node->data);
    if(node->right != NULL) traverseInorder(node->right);
}

bool isSorted(){
    for(int i=0; i<arr.size()-1; i++){
        if (arr[i] >= arr[i+1]) return false;
    }
    return true;
}
bool checkBST(Node* root) {
    traverseInorder(root);
    return isSorted();
}


// # Improved solution

bool checkBST(Node* root, int minValue, int maxValue) {
    if (root == NULL) {
        return true;
    }

    if (root->data < minValue || root->data > maxValue) {
        return false;
    }

    return (    checkBST(root->left, minValue, root->data - 1)
            &&  checkBST(root->right, root->data + 1, maxValue)
            );
}

bool checkBST(Node* root) {
    return checkBST(root, 0, 10000);
}
