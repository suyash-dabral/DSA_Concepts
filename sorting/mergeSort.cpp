#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int start, int end, int mid){
    int left=start;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=end){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }

   
}

void mergeSort(vector<int>&arr, int start, int end){
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    mergeSort(arr,0,mid);
    mergeSort(arr,mid+1, end);
    merge(arr,0,end,mid);
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nBefore sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    mergeSort(arr,0,n-1);
    cout<<"\n After Sorting: "<<endl;
     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}