class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)
            return 0;
        int i=0, j=nums.size()-1;
        int k=0;
        while(i<=j) {
            if(nums[i]==val){
                swap(nums[i], nums[j]);
                k++;
                j--;
            } else {
                i++;
            }
        }
        
        return nums.size()-k;
    }
};