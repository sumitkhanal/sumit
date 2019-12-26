#include<iostream>
#include"LinkedBT.h"
LinkedBST::LinkedBST(){
    root=NULL;
}

LinkedBST::~LinkedBST(){}

bool

void LinkedBST::add(int data){
    Node *newNode=new Node());
    newNode->key=data;
    newNode->left=NULL;
    newNode->right=NULL;
    if(root==NULL){
       this->root=newNode;
    }
    else{
        this->add(root,newNode);
    }
}

void LinkedBST::add(Node *subtree, Node *newNode){
    if(data<subtree->data){
        if(subtree->left==NULL){
            subtree->left=newNode;
        }
        else{
            add(subtree->left, newNode);
        }
    }
}
