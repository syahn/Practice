// 1. Reflection

// - I solved it in DFS.
// - We can solve it with BFS(level-order) and it's most preferable solution.

// 2. Problem

// Given a binary tree, find its minimum depth.
//
// The minimum depth is the number of nodes along the shortest path from the root
// node down to the nearest leaf node.

// 3. Initial solution( complexity: time=>O(n) space=>O(logn))

class Solution {
public:
    void traverse(TreeNode* root,int &min, int v){
        if(root == NULL) return;
        ++v;
        if(!root->left && !root->right ){
            min = min > v ? v : min;
            return;
        }
        traverse(root->left, min, v);
        traverse(root->right, min, v);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        vector<int> arr;
        int min = 987654321, v = 0;
        traverse(root, min, v);
        return min;
    }
};

// 4. Improved solution( )

 // complexity: time=>O(n) space=>O(logn)
class Solution {
public:
    int minDepth(TreeNode *root) {
        if(!root) return 0;
        if(!root->left) return 1 + minDepth(root->right);
        if(!root->right) return 1 + minDepth(root->left);
        return 1+min(minDepth(root->left),minDepth(root->right));
    }
};

// complexity: time=>O(n) space=>O(n)
int minDepth(TreeNode* root) {
    if (root == NULL) return 0;
    queue<TreeNode*> Q;
    Q.push(root);
    int i = 0;
    while (!Q.empty()) {
        i++;
        int k = Q.size();
        for (int j=0; j<k; j++) {
            TreeNode* rt = Q.front();
            if (rt->left) Q.push(rt->left);
            if (rt->right) Q.push(rt->right);
            Q.pop();
            if (rt->left==NULL && rt->right==NULL) return i;
        }
    }
    return -1; //For the compiler thing. The code never runs here.
}
