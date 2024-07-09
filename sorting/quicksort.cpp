#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&v,int start,int end){
    int pivot=v[start];
    int i=start, j=end;
    while(i<j){
        while(v[i]<=pivot && i<end){
            i++;
        }
        while(v[j]>pivot && j>0){
            j--;
        }
        if (i<j) swap(v[i],v[j]);
    }
    swap(v[start],v[j]);
    return j;
}

void quickSort(vector<int>&v,int start,int end){
    if(start<end){
         int part=partition(v,start,end);
         quickSort(v,start,part);
         quickSort(v,part+1,end);
   }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    quickSort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}