#include<bits/stdc++.h>
using namespace std;

int balanced(TreeNode * root){
   if(root==NULL) return 0;
   int lh=balanced(root->left);
   if(lh==-1) return -1;
   int rh=balanced(root->right);
   if(rh==-1) return -1;
   if(abs(lh-rh)>1) return -1;
   return 1+max(lh,rh);  
}

bool isBalanced(TreeNode * root){
    return balanced(root)!=-1;
}