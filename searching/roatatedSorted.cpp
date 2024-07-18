#include<bits/stdc++.h>
using namespace std;

void search(vector<int>v,int n,int x){
    int ans=-1;
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==x){
            ans=mid;
            break;
        }
        if(v[low]<=v[mid]){
            if(x<=v[mid] && v[low]<=x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(v[mid]<=x &&  x<=v[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    cout<<ans;
}


int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int c;
    cin>>c;
    search(v,n,c);
    return 0;
}