/*Problem Description :
The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

Note:

Return -1 if the array is null
Return 0 if the total amount of food from all houses is not sufficient for all the rats.
Computed values lie within the integer range

*/

#include<bits/stdc++.h>
using namespace std;

int ratCount(int r,int unit,int n,int arr[]){
    int total_req=r*unit;
    if(n==0) return -1;
    int val=0,num=0;
    for(int i=0;i<n;i++){
        val+=arr[i];
        if(val>=total_req){
            num=i+1;
            return num;
        }
    }
    return 0;
}

int main(){
    int n,r,unit;
    cin>>n>>r>>unit;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=ratCount(r,unit,n,arr);
    cout<<res;
    return 0;

}

