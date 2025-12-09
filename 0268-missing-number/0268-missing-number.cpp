class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int i = 0;
        // for(i = 0; i<nums.size(); i++){
        //     if(i!=nums[i])
        //         return i;
        // }
        // return i;
        int n = nums.size();
        int expected_sum = n*(n+1)/2;
        int sum = 0;
        for(int i: nums){
            sum+=i;
        }
        return (expected_sum - sum);
    }
};