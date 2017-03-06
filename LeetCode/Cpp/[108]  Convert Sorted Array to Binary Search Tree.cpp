// 1. Reflection

// - I failed to solve it, but came up with main idea to solve it. 
// - It's similar to insert node in the BST.

// 2. Problem

// Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

// 3. Initial solution( complexity: time=>O(n) space=>O(logn))

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode * makeBst(vector<int> & arr,int s, int n){
        if(s > n) return NULL;
        int mid = (s+n)/2;
        TreeNode * newNode = new TreeNode(arr[mid]);
        newNode->left = makeBst(arr, s, mid-1);
        newNode->right = makeBst(arr, mid+1, n);
        return newNode;
    }

    TreeNode * sortedArrayToBST(vector<int>& nums) {
        return makeBst(nums, 0, nums.size()-1);
    }
};
// 4. Improved solution( complexity: time=>O() space=>O() )
