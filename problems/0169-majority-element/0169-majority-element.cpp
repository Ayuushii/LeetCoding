class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return nums[0];
        sort(nums.begin(), nums.end());
        int c=0;
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[i-1])
                c=0;
            else
                c++;
            if(c>=n/2)
                return nums[i];
       }
       return 0; 
    }
};