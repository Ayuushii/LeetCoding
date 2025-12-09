class Solution {
public: 
    bool subsetSum (vector<int> &arr, int sum, int n) {
        vector<vector<bool>> t(n+1, vector<bool>(sum+1));
        for(int i=0; i<=n; i++){
            for(int j=0; j<=sum; j++){
                if(i==0)
                    t[i][j] = false;
                if(j==0)
                    t[i][j] = true;
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=sum; j++){
                //If ele is less eq to required sum, include || exclude
                if(arr[i-1]<=j)
                    t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
                else 
                    t[i][j] = t[i-1][j];
            }
        }
        return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        //Calculate total sum of the arr
        //If there has to be two subsets with equal sum, the total sum  (S) has to be EVEN
        //If 2 subsets make 2S, there has to be 1 subset with sum S
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        if(sum%2!=0)
            return false;
        return subsetSum(nums, sum/2, nums.size());
    }
};