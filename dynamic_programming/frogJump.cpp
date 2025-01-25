
// MEMOIZATION

int numberOfWays(vector<int>&heights){
    int n=heights.size();
    vector<int>dp(n,-1);
    return find(heights,n-1,dp);
}

int find(vector<int>&heights,int n,vector<int>&dp){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int left=find(heights,n-1,dp) + abs(heights[n]-heights[n-1]);
    int right=INT_MAX;
    if(n>1){
        right=find(heights,n-2,dp) + abs(heights[n]-heights[n-2]);
    }
    return dp[n]=min(left,right);
}





// TABULATION

int numberOfWays(vector<int>&heights){
    int n=heights.size();
    vector<int>dp(n,-1);
    dp[0]=0;
    for(int i=1;i<n;i++){
        int left=dp[i-1] + abs(heights[i]-heights[i-1]);
        int right=INT_MAX;
        if(i>1){
            right=dp[i-2] + abs(heights[i]-heights[i-2]);
        }
        dp[i]=min(left,right);
    }
    return dp[n-1];
}