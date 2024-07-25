// Several ways to do that
#include<bits/stdc++.h>
using namespace std;


//Use sorting algos  --> merge, quick, count 


// Use 3 variables to count --> O(2n)

void variableCount(vector<int>v, int n){
        int z=0,one=0,t=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                z++;
            }
            else if(v[i]==1){
                one++;
            }
            else{
                t++;
            }
        }
        for(int i=0;i<z;i++){
            v[i]=0;
        }
        for(int i=z;i<z+one;i++){
            v[i]=1;
        }
        for(int i=one;i<z+one+t;i++){
            v[i]=2;
        }
        cout<<"Sorted: "<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }

}




// Optimal solution is Dutch National Flag Algorithm -> O(n)  with constant extra space

void dutchFlag(vector<int>v ,int n){
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(v[mid]==0){
                swap(v[mid],v[low]);
                mid++;
                low++;
            }
            else if(v[mid]==1){
                mid++;
            }
            else{
                swap(v[mid],v[high]);
                high--;
            }
        }
        cout<<"\n Sorted : "<<endl;
        
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
}




int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    variableCount(v,n);
    dutchFlag(v,n);

}