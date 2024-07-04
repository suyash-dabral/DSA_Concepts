#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int sum=0;
    int a=n;
    while(n>0){
        int rem=n%10;
        //cout<<"\n" << rem;
        sum+=(rem*rem*rem);
        //cout<<"\n" <<sum;
        n=n/10;
    }
    if(sum==a){
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    cout<< armstrong(n) ;
    return 0;
}