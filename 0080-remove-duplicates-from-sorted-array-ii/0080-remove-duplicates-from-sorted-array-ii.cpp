class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int prev = -10001;
        int count = 0;
        while(i<nums.size()){
            if(nums[i]!=prev){
                //Seeing first time.
                count = 1;
                prev = nums[i];
                nums[j] = nums[i];
                j++;
            } else {
                //If seeing second time
                if(count==1){
                    nums[j]=nums[i];
                    count++;
                    j++;
                }
            }
            i++;
        }
        return j;
    }
};