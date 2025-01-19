vector<int>findNumbers(vector<int>arr){
    int n=arr.size();
    vector<int>temp(n+1,0);
    vector<int>sol;
    for(int i=0;i<n;i++){
        temp[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(temp[i]==2){
            sol.push_back(i);
        }
        else if(temp[i]==0){
            sol.push_back(i);
        }
    }
    return sol;
}