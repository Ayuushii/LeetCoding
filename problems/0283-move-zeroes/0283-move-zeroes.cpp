class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ifzero = -1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==0) {
                ifzero=i;
                break;
            }
        }
        if(ifzero==-1)
            return;
        for(int i=ifzero+1;i<nums.size();i++){
            if(nums[i]!=0) {
                nums[ifzero] = nums[i];
                nums[i] = 0;
                ifzero++;
            }
        }
    }
};