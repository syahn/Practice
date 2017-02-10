// 1. Reflection

- I failed to solve it. I have solved this before. 
- I came up with Initial solution approach, but used vector and I couldn't pass the
  judgement.
- Improved one is really beauty of recursion

// 2. Problem

// Given a binary tree, find its maximum depth.
// The maximum depth is the number of nodes along the longest path from the root
// node down to the farthest leaf node.

// 3. Initial solution( complexity: time=>O(n) space=>O(logn))

void traverse(TreeNode* head, int height, int& max){
            if(head == NULL) return ;
            if(max < ++height) max = height;
            traverse(head->left, height, max);
            traverse(head->right, height, max);
    }

    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int maxHeight=0;
        traverse(root, 0, maxHeight);
        return maxHeight;
    }

// 4. Improved solution( complexity: time=>O(n) space=>O(logn) )

class Solution {
public:

    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
