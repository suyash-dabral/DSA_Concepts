#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> bfs(TreeNode * root){
    vector<vector<int>>ans;
    if(root==NULL) return ans;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int>lvl;
        for(int i=0;i<size;i++){
            TreeNode * node=q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            lvl.push_back(node->val);
        }
        ans.push_back(lvl);
    }
    return ans;
}