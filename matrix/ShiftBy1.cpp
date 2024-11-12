/*

Given an `M × N` integer matrix, shift all its elements by `1` in spiral order.

Input:

[
	[ 1,  2,  3,  4, 5],
	[16, 17, 18, 19, 6],
	[15, 24, 25, 20, 7],
	[14, 23, 22, 21, 8],
	[13, 12, 11, 10, 9]
]

Output:

[
	[25,  1,  2,  3, 4],
	[15, 16, 17, 18, 5],
	[14, 23, 24, 19, 6],
	[13, 22, 21, 20, 7],
	[12, 11, 10,  9, 8]
]

*/

class Solution
{
public:
	void shiftMatrix(vector<vector<int>> &mat)
	{
		// Write your code here...
		if(mat.size()==0) return;
		int left=0,right=mat[0].size()-1;
		int top=0,bottom=mat.size()-1;
		int prev=mat[0][0];
		while(true){
			if(left>right) break;
			for(int i=left;i<=right;i++){
				swap(mat[top][i],prev);
			}
			top++;
			if(top>bottom) break;
			for(int i=top;i<=bottom;i++){
				swap(mat[i][right],prev);
			}
			right--;
			if(left>right) break;
			for(int i=right;i>=left;i--){
				swap(mat[bottom][i],prev);
			}
			bottom--;
			if(top>bottom) break;
			for(int i=bottom;i>=top;i--){
				swap(mat[i][left],prev);
			}
			left++;
			
		}
		mat[0][0]=prev;
	}
};
