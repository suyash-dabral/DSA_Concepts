
/* 

Given an integer array arr, count how many elements x there are, such that x + 
1 is also in arr. If there’re duplicates in arr, count them separately.

*/

#include<bits/stdc++.h>
using namespace std;
int countNum(vector<int>v){
    int n=v.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    int res=0;
    for(auto it:mp){
        if(mp.find(it.first+1)!=mp.end()){
            res+=it.second;
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<countNum(v);
    return 0;
}