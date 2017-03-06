// 1. Reflection

// - I solved it. 
// - It's hard to understande bottom-up approach. I'll visit it later.

// 2. Problem

// Given a singly linked list where elements are sorted in ascending order,
// convert it to a height balanced BST.

// 3. Initial solution( complexity: time=>O(nlogn) space=>O(n))

class Solution {
public:
    void traverse(ListNode *head, vector<int> &arr){
        while(head != NULL){
            arr.push_back(head->val);
            head = head->next;
        }
    }

    TreeNode *buildBST(vector<int> &arr, int s, int l){
        if( s > l ) return NULL;
        int mid = (s + l) / 2;
        TreeNode * head = new TreeNode(arr[mid]);
        head->left = buildBST(arr, s, mid-1);
        head->right = buildBST(arr, mid+1, l);
        return head;
    }

    TreeNode *sortedListToBST(ListNode* head) {
        vector<int> arr;
        traverse(head, arr);
        TreeNode * root = buildBST(arr, 0,arr.size()-1);
        return root;
    }
};

// 4. Improved solution( complexity: time=>O(n) space=>O(logn) )

private ListNode list;
private TreeNode sortedListToBST(int start, int end) {
   if (start > end) return null;
   int mid = (start + end) / 2;
   TreeNode leftChild = sortedListToBST(start, mid-1);
   TreeNode parent = new TreeNode(list.val);
   parent.left = leftChild;
   list = list.next;
   parent.right = sortedListToBST(mid+1, end);
   return parent;
}
public TreeNode sortedListToBST(ListNode head) {
   int n = 0;
   ListNode p = head;
   while (p != null) {
p = p.next;
n++; }
list = head;
   return sortedListToBST(0, n - 1);
}
