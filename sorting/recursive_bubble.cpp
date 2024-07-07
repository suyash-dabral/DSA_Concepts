#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int>&v,int s){
    if(s==1){
        return ;
    }
    for(int j=0;j<v.size()-1;j++){
        if(v[j]>v[j+1]){
            swap(v[j],v[j+1]);
        }
    }
    bubble(v,s-1);
    
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bubble(v,n);
    for(int i=0;i<v.size();i++){
    
        cout<<v[i];
    }
    
}