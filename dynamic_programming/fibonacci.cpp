#include<bits/stdc++.h>
using namespace std;

int calcFibo(int n, vector<int>&dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=calcFibo(n-1,dp)+calcFibo(n-2,dp);
}

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<< calcFibo(n,dp);
    return 0;

}