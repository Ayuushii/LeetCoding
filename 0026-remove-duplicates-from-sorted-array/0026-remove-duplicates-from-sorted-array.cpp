class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //    //Keep a write index that tracks the correct writes to their positions;
    //    int i=0;
    //    //Keep a read index that moves till we find a number different than current
    //    int j=0;
    //    //A variable to store what value we already have and dont need anymore further.
    //    int prev=-101;
    //    for(i=0; i<nums.size();i++) {
    //     //If we found a new value
    //     if(nums[i]!=prev){
    //         nums[j] = nums[i];
    //         prev = nums[i];
    //         j++;
    //     }
    //    }
    //    return j;

    //Easier solution
        int j = 1;
        for(int i=1; i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};