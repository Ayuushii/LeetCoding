class Solution {
public:
    int solve(int n, vector<int> &dp, vector<int> &nums) {
        if(n==0 || n==1)
            return nums[n];
        if(n>=0 && dp[n]!=-1)
            return dp[n];
        int max_ans = INT_MIN;
        for(int k = n-2; k>=0; k--) {
            int ans = solve(k, dp, nums)+nums[n];
            max_ans = max(ans, max_ans);
        }
        dp[n] = max_ans;
        return max_ans;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        int ans = max(solve(n-1, dp, nums), solve(n-2, dp, nums));
        return ans;
    }
};