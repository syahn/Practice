
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

// Basic structure of BST node
typedef struct bstNode *BST_ptr;
struct bstNode{
    BST_ptr right;
    BST_ptr left;
    BST_ptr parent;
    int key;
};


// A utility function to create a new BST node
BST_ptr newNode(int item){
    BST_ptr temp =  (BST_ptr)malloc(sizeof(struct bstNode));
    temp->key = item;
    temp->left = temp->right = temp->parent= NULL;
    return temp;
}


// Search for the node
BST_ptr search(BST_ptr node, int val){
    if(node != NULL){
        if(val == node->key ){
            return node;
        }
        if(val < node->key ){
            return search(node->left, val);
        }
        if(val > node->key){
            return search(node->right, val);
        }
    } else {
        return NULL;
    }
}


//Pseudo code
//Tree-insert(T,z)
//    y=NIL
//    x=T.root
//    if search(T,z) != NULL // Do not attach z if it is already in T
//        while x!=NIL
//            y= x
//            if z.key < x.key
//                x = x.left
//            else x = x.right
//        z.p = y
//        if y == NIL
//            T.root = z
//        elseif z.key < y.key
//            y.left = z
//        else y.right = z

// Insert the new node
BST_ptr insert(BST_ptr tree, int val){
    BST_ptr y = NULL;
    BST_ptr x = tree;
    BST_ptr z = newNode(val);

    if(tree == NULL){
        tree =  newNode(val);
    } else if (!search(tree, val)) {
        while(x != NULL){
            y = x;
            if(val < x->key){
                x = x->left;
            } else {
                x = x->right;
            }
        }
        z->parent = y;

        if(z->key < y->key){
            y->left = z;
        } else {
            y->right = z;
        }
    }
    return tree;
}




void print(BST_ptr tree, int indent=0){
    if(tree != NULL){
        print(tree->left, indent+4);
        cout << tree->key << "\n";
        print(tree->right, indent+4);
        if (indent){
            cout << setw(indent) << ' ';
        }
    }
}


BST_ptr minimum(BST_ptr node){
    if(node==NULL) return NULL;
    while(node->left != NULL){
        node = node->left;
    }
    return node;
}

BST_ptr maximum(BST_ptr node){
    while(node->right != NULL){
        node = node->right;
    }
    return node;
}


BST_ptr successor(BST_ptr node){
    if(node==NULL) return NULL;
    if(node->right != NULL){
        return minimum(node->right);
    }
    BST_ptr y = node->parent;
    BST_ptr x = node;

    while(y != NULL && (y->right == x)){
        x = y;
        y = y->parent;
    }
    return y;

}

BST_ptr predecessor(BST_ptr node){
    if(node->left != NULL){
        return maximum(node->left);
    } else {
        BST_ptr y = node->parent;
        while(y != NULL && (y->left == node)){
            node = y;
            y = y->parent;
        }
        return y;
    }
}

BST_ptr searchPrime(BST_ptr tree, int val){

    if(tree != NULL){
        if(val == tree->key ){
            return tree;
        }
        if(val < tree->key ){
            return searchPrime(tree->left, val);
        }
        if(val > tree->key){
            BST_ptr sucTree = successor(tree);
            if(val < sucTree->key) return sucTree;
            return searchPrime(sucTree, val);
        }
    } else {
        return NULL;
    }
}

int nearestN(BST_ptr node, int val){
    BST_ptr keyNode = search(node, val);
    if(keyNode == NULL){
        keyNode = searchPrime(node, val);
        // cout << keyNode->key <<'\n';
        BST_ptr sucNode = successor(keyNode);
        // cout << sucNode->key <<'\n';
        BST_ptr preNode = predecessor(keyNode);
        // cout << preNode->key <<'\n';
        if( abs(keyNode->key - sucNode->key) > abs(keyNode->key - preNode->key) ) return preNode->key;
        else
            return sucNode->key;
    } else {
        return keyNode->key;
    }
}


/* Given a binary search tree and a key, this function deletes the key
   and returns the new root */
BST_ptr deleteNode(BST_ptr tree, int key)
{
    if (tree == NULL) return tree;

    if (key < tree->key)
        tree->left = deleteNode(tree->left, key);

    else if (key > tree->key)
        tree->right = deleteNode(tree->right, key);

    else {
        // node with only one child or no child
        if (tree->left == NULL) {
            BST_ptr temp = tree->right;
            free(tree);
            return temp;
        } else if (tree->right == NULL) {
            BST_ptr temp = tree->left;
            free(tree);
            return temp;
        }

        // node with two children: Get the inorder successor (smallest
        // in the right subtree)
        BST_ptr temp = minimum(tree->right);

        // Copy the inorder successor's content to this node
        tree->key = temp->key;

        // Delete the inorder successor
        tree->right = deleteNode(tree->right, temp->key);
    }
    return tree;
}




int main() {
    srand(time(NULL));
    int arr[10];

    // Root node;
    BST_ptr root=NULL;

    for(int i=0; i<10; ++i){
        arr[i] = rand() % 10;
        root = insert(root, arr[i]);
        cout << arr[i] << '\t';
    }

    cout << '\n' << '\n';
    print(root);

//    cout << '\n' << '\n' <<"Is there 17 in the BST? >> "<< '\n' ;
//    BST_ptr search17 = search(root, 17);
//    if(search17 == NULL) cout << "No";
//    else cout << "Yes " << search17->key;
//
//    cout << '\n' << '\n' <<"Is there 22 in the BST? >> "<< '\n' ;
//    BST_ptr search22 = search(root, 22);
//    if(search22 == NULL) cout << "No";
//    else cout << "Yes " << search22->key;
//
//    cout << '\n' << '\n' <<"Is there 88 in the BST? >> "<< '\n' ;
//    BST_ptr search88 = search(root, 88);
//    if(search88 == NULL) cout << "No";
//    else cout << "Yes " << search88->key;
//
//    cout<< "\n" << "\n";


    // int near17 = nearestN(root, 17);
    // int near22 = nearestN(root, 22);
    // int near88 = nearestN(root, 88);

    // if(near17 != NULL) cout << '\n' << near17 ;
    // else cout << "error";
    // if(near22 != NULL) cout << '\n' << near22 ;
    // else cout << "error";
    // if(near88 != NULL) cout << '\n' << near88 ;
    // else cout << "error";

//    root = deleteNode(root, 4);
//    print(root);

    return 0;
}
