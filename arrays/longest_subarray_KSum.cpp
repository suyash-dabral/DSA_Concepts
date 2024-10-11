

#include<bits/stdc++.>
using namespace std

// Brute => generate all subarrays and check if the sums is equal or not. Complexity will be O(n3)

void brute(vector<int>v){
    int size=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int a=i;
            int calc=0;
            while(a!=j){
                calc+=v[a];
                if(calc==k){
                    size=max(size,j-i+1);
                }
                a++;
            }
        }
        
        cout<<size;
    }

}

/*

 Better-> now instead of adding element in a while loop,try to optimize it by adding the element while making the subarray
It will reduce the complexity to O(n2)

*/

void better(vector<int>v){

}


void optimal(vector<int>v){

}