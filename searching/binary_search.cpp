#include<bits/stdc++.h>
using namespace std;


void binary(vector<int>v,int n,int target){
    int s=0, e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(v[mid]==target){
            cout<<mid;
            return;
        }
        else if(v[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<"Not found";
    return;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    binary(v,n,target);
    return 0;
}