// Adjacency list for 0- based indexing

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

    // Printing the adjacency list
    cout << "\nPrinting the adjacency list:\n";
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
