class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int total = 0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        
        int left = 0;
        int right = total-nums[0];
        if(left == right)
            return 0;
        for(int i=1;i<n;i++){
            left+=nums[i-1];
            right-=nums[i];
            if(left==right)
                return i;
        }
        return -1;
    }
};