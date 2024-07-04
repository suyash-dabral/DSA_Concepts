#include<bits/stdc++.h>
using namespace std;
void divisors(int n){
    cout<<"divisors are:" <<endl;
     for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            cout<<i<<endl;
            cout<<n/i<<endl;
        }
     }
}

int main()
{
    int n;
    cin>>n;
    divisors(n);
    return 0;
}