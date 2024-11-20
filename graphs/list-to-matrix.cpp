#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of nodes (n): ";
    cin >> n;

    // Initialize the adjacency list
    vector<vector<int>> adj(n);

    cout << "Enter the number of edges (m): ";
    cin >> m;
    for (int i = 0; i < m; i++) {
        cout << "Enter values of u and v (0-based indices): ";
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  
    }

    vector<vector<int>>adj_matrix(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<adj[i].size();j++){
            adj_matrix[i][adj[i][j]]=1;
        }
    }
    //Printing the matrix
    cout<<"\nMatrix is: "<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<adj_matrix[i][j];
        }
        cout<<endl;
    }

}