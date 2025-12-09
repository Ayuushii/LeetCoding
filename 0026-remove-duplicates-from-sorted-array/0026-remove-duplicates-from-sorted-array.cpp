class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uni = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]!=nums[uni]){
                uni = uni+1;
                nums[uni] = nums[i];
            }
        }
        return uni+1;
    }
   
};