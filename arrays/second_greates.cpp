// We have to find the second greatest element in the arry without using sorting

#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>arr){
    int n=arr.size();
    int maxi=arr[0], second_maxi=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>maxi){
            second_maxi=maxi;
            maxi=arr[i];
        }
        else if(arr[i]>second_maxi && arr[i]<maxi){
            second_maxi=arr[i];
        }
    }
    return second_maxi;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< secondLargest(arr);
    return 0;
}