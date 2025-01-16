//Pascal Triangle

#include<bits/stdc++.h>
using namespace std;

vector<int> generateRows(int row){
    vector<int>ans;
    ans.push_back(1);
    if (row==1) return ans;
    int val=1;
    for(int i=1;i<row;i++){
        val=val*(row-i);
        val= val/i;
        ans.push_back(val);
    }
    return ans;
}

void generate(int rows){
    vector<vector<int>>res;
    for(int i=1;i<=rows;i++){
        res.push_back(generateRows(i));
    }
    for(int i=0;i<=rows;i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j];
        }
        cout<<"\n";
    }
}


int main()
{
    int rows;
    cin>>rows;
    generate(rows);
    return 0;
}