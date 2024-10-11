#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int a=i;
            while(a!=j){
                cout<<v[a];
                a++;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}