// We have to return first and last index of an ekement in the array. If no is not present return -1

#include<bits/stdc++.h>
using namespace std;

//Iterative approach  ---> O(N)

void iterative(vector<int>v, int n, int t){
    int s=-1,e=-1;
    for(int i=0;i<n;i++){
        if(v[i]==t){
            if(s==-1){
                s=i;
            }
            e=i;
        }
    }
    cout<<s<<" "<<e;
}


//Binary search approach ------> O(log N)


int upper(vector<int>v,int n,int t)
{
    int low=0,high=n-1;
    if(v[n-1]<t || v[0]>t){
        return -1;
    }
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]<=t){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}


int lower(vector<int>v,int n,int t){
        int low=0,high=n-1;
    if(v[n-1]<t || v[0]>t){
        return -1;
    }
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]>=t){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}



void binary(vector<int>v,int n,int t){
    int s=upper(v,n,t);
    int e=lower(v,n,t);
    if(v[s]!=t){
        s=-1;
    }
    if(v[e]!=t){
        e=-1;
    }
    cout<<s<<" "<<e;
}


int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int t;
    cin>>t;
    iterative(v,n,t);
    binary(v,n,t);
    return 0;
}