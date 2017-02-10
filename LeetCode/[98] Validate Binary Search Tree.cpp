// 1. Reflection

// - I solved it.
// - It was good memory recovery for inordertraversal in BST.
// - Improved solution is quite smart approach, even though solution using inordertraversal
//   is much concise.

// 2. Problem

// Given a binary tree, determine if it is a valid Binary Search Tree (BST).

// 3. Initial solution( complexity: time=>O(n) space=>O(n))

class Solution {
public:

    void traverse(vector<int> &arr, TreeNode* root){
        if(root == NULL) return;
        traverse(arr, root->left);
        arr.push_back(root->val);
        traverse(arr, root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        vector<int> ret;
        traverse(ret, root);
        for(int i=1; i<ret.size(); i++){
            if(i != ret.size() && ret[i-1] >= ret[i]) return false;
        }
        return true;
    }
};

// 4. Improved solution( complexity: time=>O(n) space=>O(n) )

public boolean isValidBST(TreeNode root) {
   return valid(root, null, null);
}
private boolean valid(TreeNode p, Integer low, Integer high) {
    if (p == null) return true;
    return (low == null || p.val > low) && (high == null || p.val < high)
    && valid(p.left, low, p.val)
    && valid(p.right, p.val, high);
}
