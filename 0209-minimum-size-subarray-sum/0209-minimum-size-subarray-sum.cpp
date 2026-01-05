class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0, j=0;
        int n = nums.size();
        int len=0, minlen=INT_MAX;
        int sum=0;
        for(int j=0; j<n; j++) {
            sum+=nums[j];
            while(sum>=target){
                minlen=min(minlen, j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        return minlen==INT_MAX?0:minlen;
    }
};