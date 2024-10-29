#include<bits/stdc++.h>
using namespace std;


int diameter(TreeNode * root,int &maxi){
    if(root==NULL) return 0;
    int lh=diameter(root->left,maxi);
    int rh=diameter(root->right,maxi);
    maxi=max(maxi,lh+rh);
    return 1+max(lh,rh);
}

int treeDiamater(TreeNode * root){
    int maxi=0;
    diameter(root,maxi);
    return maxi;
}