int count(int i,int j,int n,int m, vector<vector<int>>&dp){
    if(i==n-1 && j==m-1) return 1;
    if(i>=n || j>=m) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    else return dp[i][j]=count(i+1,j,n,m,dp)+count(i,j+1,n,m,dp);
}

int countPath(int n,int m){
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    int c=count(0,0,n,m,dp);
    if(n==1 && m==1) return c;
    return dp[0][0];
}