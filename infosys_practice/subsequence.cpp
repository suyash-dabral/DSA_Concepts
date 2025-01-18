#include<bits/stdc++.h>
using namespace std;

void printSubsequence(vector<int>arr, int n, vector<int>v, int idx){
    if(idx>=n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[idx]);
    printSubsequence(arr,n,v,idx+1);
    v.pop_back();
    printSubsequence(arr,n,v,idx+1);
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
    printSubsequence(arr,n,v,0);
    return 0;
}