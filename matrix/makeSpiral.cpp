/*

Given an integer array containing `N × N` elements, construct an `N × N` matrix from it in spiral order.

Input: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25]

Output:

[
	[ 1   2   3   4  5],
	[16  17  18  19  6],
	[15  24  25  20  7],
	[14  23  22  21  8],
	[13  12  11  10  9]
]

*/

class Solution
{
public:
	vector<vector<int>> createSpiralMatrix(vector<int> const &nums)
	{
		vector<vector<int>>res;
		if(nums.size()==0) return res;
		int n=sqrt(nums.size());
		int left=0, right=n-1;
		int top=0, bottom=n-1;
		int var=0;
		res.resize(n,vector<int>(n));
		while(true){
			if(left>right) break;
			for(int i=left;i<=right;i++){
				res[top][i]=nums[var++];
			}
			top++;
			if(top>bottom) break;
			for(int i=top;i<=bottom;i++){
				res[i][right]=nums[var++];
			}
			right--;
			if(left>right) break;
			for(int i=right;i>=left;i--){
				res[bottom][i]=nums[var++];
			}
			bottom--;
			if(top>bottom) break;
			for(int i=bottom;i>=top;i--){
				res[i][left]=nums[var++];
			}
			left++;
		}
		return res;
		
	}
};
