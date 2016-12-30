// # Reflection

// - improved one is quite smart way

// # Problem

// The height of a binary tree is the number of edges between the tree's root and
// its furthest leaf. This means that a tree containing a single node has a height of .
//
// Complete the getHeight function provided in your editor so that it returns
// the height of a binary tree. This function has a parameter, , which is a pointer to the root node of a binary tree.


// # Initial solution

        void traverse(Node* head, int height, int& max){
            if(head == NULL) return ;
            if(max < ++height) max = height;
            traverse(head->left, height, max);
            traverse(head->right, height, max);
        }

        int height(Node* root) {
            int h = 0;
            traverse(root, 0, h);
            return h-1;
        }



// # Improved solution

int getHeight(Node* root){
    if ( root == NULL ){
        return -1;
    }
    else{
        return 1 + max( getHeight(root->left), getHeight(root->right) );
    }
}
