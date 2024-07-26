#include<bits/stdc++.h>
using namespace std;


void next(vector<int>v, int n){
    int index=-1;
    for(int i=n-2;i>=0;i++){
        if(v[i]<v[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(v.begin(),v.end());
        cout<<"Next Permutation: "<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        return ;
    }
    for(int i=n-1;i>index;i++){
        if(v[i]>v[index]){
            swap(v[i],v[index]);
            break;
        }
    }
    reverse(v.begin()+index+1,v.end());
    cout<<"Next Permutation: "<<endl;
     for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    next(v,n);
}