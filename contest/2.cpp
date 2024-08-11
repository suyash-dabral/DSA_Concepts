#include<bits/stdc++.h>
using namespace std;
void calc(int n,vector<int>a,vector<int>b){
    bool t=false;
    for(int i=0;i<2;i++){
        if(a==b){
            t=true;
        }
        reverse(b.begin(),b.end());
    }
    if(t==true){
        cout<<"Bob\n";
    }
    else{
        cout<<"Alice\n";
    }
}

int main()
{
    int t;
    cin>>t;
    
    while(t>0){
        int n;
        cin>>n;
     //   cout<<endl;
        vector<int>b(n);
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       // cout<<endl;
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        calc(n,a,b);
        
        t--;
    }
   
    return 0;
}