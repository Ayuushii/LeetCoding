class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int least = INT_MAX;
        int second_least = INT_MAX;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]<least) {
                second_least = least;
                least=nums[i];
            }
            else if (nums[i] < second_least)
                second_least = nums[i];
        }
        int ans = nums[0]+least+second_least;
        return ans;
    }
};