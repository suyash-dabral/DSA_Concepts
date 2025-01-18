#include<bits/stdc++.h>
using namespace std;

void printSubsequence(vector<int>arr, int n, vector<int>v, int idx, int k){
    if(idx>=n){
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        if(sum==k){
            for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        }
        else{
            return;
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[idx]);
    printSubsequence(arr,n,v,idx+1,k);
    v.pop_back();
    printSubsequence(arr,n,v,idx+1,k);
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    printSubsequence(arr,n,v,0,3);
    return 0;
}