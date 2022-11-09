#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node (int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void iterate(Node *n){
    if(n == NULL) {
        return;
    }

    iterate(n->left);
    cout << n->data; // do something with the value
    iterate(n->right);
}

void iterate_pre(Node *n){
    if(!n) {
        return;
    }

    cout << n->data; // do something with the value
    iterate_pre(n->left);
    iterate_pre(n->right);
}

void iterate_post(Node *n){
    if(!n) {
        return;
    }

    iterate_post(n->left);
    iterate_post(n->right);
    cout << n->data; // do something with the value
}

bool iterativeSearch(Node* root, int key)
{
    // Traverse until root reaches to dead end
    while (root != NULL) {
        // pass right subtree as new tree
        if (key > root->data) {
            root = root->right;
        }  
        // pass left subtree as new tree
        else if (key < root->data) {
            root = root->left;
        } else {
            cout << root->data;
            return true; // if the key is found return 1
        }
    }
    return false;
}

bool iterativeRecursionSearch(Node* root, int key)
{
    if (root == NULL) {
        return false;
    }
    cout << key << " " << root->data << endl;
    // pass right subtree as new tree
    if (key > root->data) {
        cout << "1/" << endl;
        return iterativeRecursionSearch(root->right, key);
    }  
    // pass left subtree as new tree
    if (key < root->data) {
        cout << "2/" << endl;
        return iterativeRecursionSearch(root->left, key);
    }
    
    cout << " 3/ " << root->data << endl;
    return true; // if the key is found return 1
}

void addNode(Node* root, int data) {
    if (root == NULL) {
        return;
    }
    //cout << data << " " << root->data << endl;
    // pass right subtree as new tree
    if (data > root->data) {
        //cout << "1/" << endl;
        if (root->right == NULL) {
            root->right = new Node(data);
            return;
        }
        addNode(root->right, data);
    }  
    // pass left subtree as new tree
    if (data < root->data) {
        //cout << "2/" << endl;
        if (root->left == NULL) {
            root->left = new Node(data);
            return;
        }
        addNode(root->left, data);
    }
    
    //cout << " 3/ " << root->data << endl;
}

int main() {

    /*create root*/
    Node* root = new Node(3);
    /* following is the tree after above statement

             3
            / \
        NULL   NULL
    */
 
    root->left = new Node(2);
    root->right = new Node(4);
    /* 2 and 3 become left and right children of 1
                   3
                /    \
               2      4
              / \     / \
           NULL NULL NULL NULL
    */
 
    root->right->right = new Node(5);
    /* 4 becomes left child of 2
               3
            /     \
           2       4
          / \     / \
      NULL NULL NULL 5
                    / \
                  NULL NULL
    */
 
    iterate(root);
/*
    cout << endl;

    addNode(root, 1);
    /* 4 becomes left child of 2
               3
            /     \
           2       4
          / \     / \
         1 NULL NULL 5
        / \         / \
      NULL NULL   NULL NULL
    */
    //iterate(root);

    return 0;
}