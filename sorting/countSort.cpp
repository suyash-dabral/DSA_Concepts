#include<bits/stdc++.h>
using namespace std;

vector<int> countSort(vector<int>&v, int n){
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,v[i]);
    }
    vector<int>count(maxi+1,0);
    for(int i=0;i<n;i++){
        count[v[i]]++;
    }
    
    for(int i=1;i<=maxi;i++){
        count[i]+=count[i-1];
    }
    
    vector<int>op(n);
    for(int i=n-1;i>=0;i--){
        op[count[ v [i] ]-1]=v[i];
        count[v[i]]--;
    }
    return op;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>res=countSort(v,n);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}