// We have to return first and last index of an ekement in the array. If no is not present return -1

#include<bits/stdc++.h>
using namespace std;

//Iterative approach  ---> O(N)

void iterative(vector<int>v, int n, int t){
    int s=-1,e=-1;
    for(int i=0;i<n;i++){
        if(v[i]==t){
            if(s==-1){
                s=i;
            }
            e=i;
        }
    }
    cout<<s<<" "<<e;
}


//Binary search approach ------> O(log N)

	int start(vector<int> arr,int n,int x){
	    int ans=-1;
	    int start=0,end=n-1;
	    while(start<=end){
	        int mid=start+(end-start)/2;
	        if(arr[mid]==x){
	            ans=mid;
	            end=mid-1;
	        }
	        else if(arr[mid]<x){
	            start=mid+1;
	        }
	        else{
	            end=mid-1;
	        }
	    }
	    return ans;
	}
	
	int end(vector<int> arr,int n,int x){
	    int ans=-1;
	    int start=0,end=n-1;
	    while(start<=end){
	        int mid=start+(end-start)/2;
	        if(arr[mid]==x){
	            ans=mid;
	            start=mid+1;
	        }
	        else if(arr[mid]<x){
	            start=mid+1;
	        }
	        else{
	            end=mid-1;
	        }
	    }
	    return ans;
	}
	void binary(vector<int> arr, int n, int x) {
	    // code here
	    int s_pos=start(arr,n,x);
	    int e_pos=end(arr,n,x);
	    cout<<s_pos<<" "<<e_pos;
	}


int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int t;
    cin>>t;
    iterative(v,n,t);
    binary(v,n,t);
    return 0;
}