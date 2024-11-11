/*

Given an `M × N` integer matrix, return its elements in spiral order.

Input:

[
	[ 1   2   3   4  5],
	[16  17  18  19  6],
	[15  24  25  20  7],
	[14  23  22  21  8],
	[13  12  11  10  9]
]

Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25]

*/

class Solution
{
public:
	vector<int> spiralTraversal(vector<vector<int>> const &mat)
	{
		vector<int>res;
		if(mat.size()==0) return res;
		int left=0, right=mat[0].size()-1;
		int top=0, bottom=mat.size()-1;
		while(true){
			if(left>right){
				break;
			}
			for(int i=left;i<=right;i++){
				res.push_back(mat[top][i]);
			}
			top++;
			if(top>bottom){
				break;
			}
			for(int i=top;i<=bottom;i++){
				res.push_back(mat[i][right]);
			}
			right--;
			if(left>right){
				break;
			}
			for(int i=right;i>=left;i--){
				res.push_back(mat[bottom][i]);
			}
			bottom--;
			if(top>bottom){
				break;
			}
			for(int i=bottom;i>=top;i--){
				res.push_back(mat[i][left]);
			}
			left++;
		}		
		return res;
	}
};
