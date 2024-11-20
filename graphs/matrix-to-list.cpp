#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter rows and columns"<<endl;
    cin>>n>>m;           // n=rows    m=columns
    vector<vector<int>>adj_matrix(n,vector<int>(m,0));    //Initialize the whole matrix with 0
    cout<<"Enter the values"<<endl;
    for(int i=0;i<n;i++){
        int u,v;
        cout<<"Enter u and v"<<endl;
        cin>>u>>v;
        adj_matrix[u][v]=1;
        adj_matrix[v][u]=1;
    }

    vector<vector<int>>adj_list(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(adj_matrix[i][j]==1){
                adj_list[i].push_back(j);
            }
        }
    }

    cout << "\nPrinting the adjacency list:\n";
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < adj_list[i].size(); j++) {
            cout << adj_list[i][j] << " ";
        }
        cout << endl;
    }
    return 0;


}