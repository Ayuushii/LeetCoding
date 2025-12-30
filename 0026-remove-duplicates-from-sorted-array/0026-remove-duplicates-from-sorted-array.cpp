class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int i=1;
        while(i<nums.size()-k){
            if(nums[i]==nums[i-1]){
                for(int j=i; j<nums.size()-k-1; j++){
                    nums[j]=nums[j+1];
                }
                k++;
            } else {
                i++;
            }
        }
        return nums.size()-k;
    }
};