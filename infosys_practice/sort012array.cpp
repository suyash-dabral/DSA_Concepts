
//Better Solution

void sortColors(vector<int>& nums) {
    int zero=0,one=0,two=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            zero++;
        }
        else if(nums[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
    for(int i=0;i<zero;i++){
        nums[i]=0;
    }
    for(int i=zero;i<zero+one;i++){
        nums[i]=1;
    }
    for(int i=zero+one;i<nums.size();i++){
        nums[i]=2;
    }
};



//Optimal Solution 


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int start=0,mid=0,end=n-1;
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[mid],nums[start]);
                start++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[end]);
                end--;
            }
        }
    }
};