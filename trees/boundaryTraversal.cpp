#include<bits/stdc++.h>
using namespace std;

void addleft(Node * root, vector<int>& res){
    Node * ptr=root->left;
    while(ptr){
        if(!isLeaf(ptr)){
            res.push_back(ptr->val);
        }
        if(ptr->left) ptr=ptr->left;
        else ptr=ptr->right;
    }
}

void leaf(Node * root, vector<int>& res){
    if(isLeaf(root)){
        res.push_back(root->val);
        return ;
    }
    if(root->left) leaf(root->left,res);
    if(root->right) leaf(root->right,res);

}

void addright(Node * root, vector<int>& res){
    vector<int>temp;
    Node * ptr=root->right;
    while(ptr){
        if(!isLeaf(ptr)) temp.push_back(ptr->val);
        if(ptr->right) ptr=ptr->right;
        else ptr=ptr->left;
    } 
    for(int i=0;i<temp.size();i++){
        res.push_back(temp[i]);
    }
}



bool isLeaf(Node * root){
    if(root->right==NULL && root->left==NULL){
        return true;
    }
    return false;
}


vector<int> boundary(Node * root){
    vector<int>res;
    if(!root) return res;
    if(!isLeaf(root)) res.push_back(root->val);
    addleft(root,res);
    leaf(root,res);
    addright(root,res);
    return res;
}