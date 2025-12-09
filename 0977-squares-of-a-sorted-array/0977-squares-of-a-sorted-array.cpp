class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=n-1,k=0;
        vector<int> ans(n,0);
        for(k = n-1;k>=0;k--){
            if(abs(nums[i]) > abs(nums[j])) {
                ans[k] = pow(nums[i],2);
                i++;
            } else {
                ans[k] = pow(nums[j],2);
                j--;  
            }
        }
        return ans;
    }
};