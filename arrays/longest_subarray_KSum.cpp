

#include<bits/stdc++.>
using namespace std

// Brute => generate all subarrays and check if the sums is equal or not. Complexity will be O(n3)

void brute(vector<int>v,int k){
    int n=v.size();
    int size=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int a=i;
            int calc=0;
            while(a!=j){
                calc+=v[a];
                a++;
            }
            calc+=v[j];
            if(calc==k){
                size=max(size,j-i+1);
            }
        }
    }
    cout<<size;
}

/*

 Better-> now instead of adding element in a while loop,try to optimize it by adding the element while making the subarray
It will reduce the complexity to O(n2)

*/

void better(vector<int>v,int k){
    int res=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        int size=0;
        for(int j=i;j<n;j++){
            size+=v[j];
            if(size==k){
                res=max(res,j-i+1);
            }
        }
    }
    cout<<res;
}


void optimal(vector<int>v){
    
}


int main(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    brute(v,k);
    better(v,k);
    optimal(v,k);
    return 0;
}