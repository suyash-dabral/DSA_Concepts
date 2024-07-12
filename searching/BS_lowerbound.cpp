#include<bits/stdc++.h>
using namespace std;

void lower(vector<int>v,int n,int target){
    int s=0, e=n-1;
    int res=n;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(v[mid]>=target){
            res=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<res;

}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int res;
    cin>>res;
    lower(v,n,res);
    cout<<"Other way is "<<endl;
    cout<< lower_bound(v.begin(),v.end(),res)-v.begin();
}