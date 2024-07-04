#include<bits/stdc++.h>
using namespace std;
void rev(vector<int>res,int n){
    if(n==0){
        cout<<res[0]<<" ";
        return;
    }
    cout<<res[n]<<" ";
    rev(res,n-1);
}
int main()
{
    int n;
    cin>>n;
    vector<int>res(n,0);
    for(int i=0;i<n;i++){
        cin>>res[i];
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    rev(res,n-1);
    return 0;
}