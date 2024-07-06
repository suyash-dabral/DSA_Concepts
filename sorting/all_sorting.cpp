#include<bits/stdc++.h>
using namespace std;


//Selection sort selects the least element from the array and swap it in front again and again
void selection(vector<int>v,int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[i]){
                mini=j;
            }
        }
        swap(v[mini],v[i]);
    }
    cout<<"\nSelecion sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}


//insertion
void insertion(vector<int>v,int n){
        for(int i=0;i<n;i++){
            int j=i;
            while(j>=0 && v[j-1]>v[j]){
                swap(v[j],v[j-1]);
                j--;
            }
        }
        cout<<"\nInsertion sort: "<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
}




//Bubble sort copares the two adjacent terms and swap the smaller one to the front
void bubble(vector<int> arr, int n)
 {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        cout<<"\nBubble sort: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }



int main()
{
    int n;
    cin>>n;
    vector<int>unsorted(n,0);
    for(int i=0;i<n;i++){
        cin>>unsorted[i];
    }
    selection(unsorted,n);
    insertion(unsorted,n);
    bubble(unsorted,n);

}