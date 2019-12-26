#include "BinaryTree.h"
class Node{
public:
    int key;
    Node *left;
    Node *right;
};



class LinkedBST:public BinarySearchTree{
private:
    Node *root;
public:
    LinkedBST();
    ~LinkedBST();
    bool isEmpty();
    void preorderTraversal();
    void add(Node *root,int data);
    bool search1(int data);
    void add(Node *subtree, Node *newNode);
};


