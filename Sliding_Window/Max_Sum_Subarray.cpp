


// Maximum sum subarray of size k


/*
    We will use Slding window approach for optimization of brute force solution.

    1- Declare the start (i) and end(j) of the window.
    2- Declare a variable sum for storing the sum of the variables and mx to count the maximum sum
    3- Now, the last possible position of j will be at the end of the array.
       So, we will declare a loop till the size of array.
    4- Calculate the sum
    5- Check the condition for the window size. Increase j till it reaches the given size k.
    6- Now, for calculation in size k, make another condition for (j-i+1==k)
    7- Calculate the max of mx and sum.
    8- Remove the sum of previous element of the sliding window from the sum and then increase i and j to move to next window for calculation.


*/



int i=0,j=0;
    long long sum=0,mx=INT_MIN;
    while(j<a.size()){
        sum+=a[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            mx=max(sum,mx);
            sum-=arr[i];
            i++;
            j++;
        }
    }