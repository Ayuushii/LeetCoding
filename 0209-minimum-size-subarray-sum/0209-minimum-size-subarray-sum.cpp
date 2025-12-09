class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int st=0, en=0, sum=0, min_len=INT_MAX;
        for(en=0; en<nums.size(); en++){
            sum+=nums[en];
            while(sum>=target){
                min_len=min(min_len, en-st+1);
                sum-=nums[st];
                st++;
            }
        }
        return (min_len==INT_MAX?0:min_len);
    }
};