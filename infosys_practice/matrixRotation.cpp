void rotation(vector<vector<int>>&matrix){
    int n=matrix.size();
    //1- Calculate Transpose
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    } 

    //Reverse each row
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}