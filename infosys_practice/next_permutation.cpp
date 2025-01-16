#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>&num){
    int n=num.size();
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(num[i]<num[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1) {
        reverse(num.begin(),num.end());
        break;
    }
    for(int i=n-1;i>idx;i--){
        if(num[idx]<num[i]){
            swap(num[i],num[idx]);
            break;
        }
    }
    reverse(num.begin()+idx+1,num.end());
}
