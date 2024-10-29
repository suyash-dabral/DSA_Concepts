#include<bits/stdc++.h>
using namespace std;

int height(TreeNode * root){
    if(root==NULL) return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return 1+max(lh,rh);
}