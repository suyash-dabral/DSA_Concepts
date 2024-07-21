#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Removing duplicates"<<endl;
    int k=1;
    for(int i=1;i<n;i++){
        if(v[i]!=v[k-1]){
            v[k]=v[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}