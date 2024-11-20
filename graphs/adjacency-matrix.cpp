// Adjacency matrix for 1- based indexing 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter rows and columns"<<endl;
    cin>>n>>m;           // n=rows    m=columns
    vector<vector<int>>adj(n+1,vector<int>(m+1,0));    //Initialize the whole matrix with 0
    cout<<"Enter the values"<<endl;
    for(int i=0;i<n;i++){
        int u,v;
        cout<<"Enter u and v"<<endl;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }

    //Print the matrix

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<adj[i][j];
        }
        cout<<endl;
    }
}






// Adjacency matrix for 0- based indexing 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter rows and columns"<<endl;
    cin>>n>>m;           // n=rows    m=columns
    vector<vector<int>>adj(n,vector<int>(m,0));    //Initialize the whole matrix with 0
    cout<<"Enter the values"<<endl;
    for(int i=0;i<n;i++){
        int u,v;
        cout<<"Enter u and v"<<endl;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }

    //Print the matrix

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<adj[i][j];
        }
        cout<<endl;
    }
}