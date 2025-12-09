class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // int maxones = 0;
        // int count = 0;
        // for(int i=0;i<nums.size();i++) {
        //     if(nums[i]==1){
        //         count++;
        //     } else {
        //         if(count>maxones)
        //             maxones = count;
        //         count = 0;
        //     }
        // }
        // return count>maxones?count:maxones;
        int count=0;
        int max=0;
        for(int num : nums){
            if(num == 1 )
                count++;
            else
                count=0;
            if(count>max)
                    max=count;
        }
        return max;
    }
};