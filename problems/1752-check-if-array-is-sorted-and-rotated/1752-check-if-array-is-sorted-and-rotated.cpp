class Solution {
public:
    bool check(vector<int>& nums) {
        /*Cases
        {3,4,5,1,2} - a[i-1] < a[i] except one scenario, 5 > 1
        {1,2,3,4,5} - a[i-1] < a[i] except a[n-1], a[0], 5 > 1
        {4,6,2,3,1} - a[i-1] !< a[i] lot of scenarios
        {1,1,1} - 0 times a[i-1] < a[i] */

        int n = nums.size();
        int count = 0;

        /* SOLUTION 1
        for(int i = 1; i<n ;i++){
            if(nums[i-1]>nums[i])
                count++;
        }
        if(nums[n-1]>nums[0])
                count++;
        */

        /* SOLUTION 2
        a[0] > a[(0+1)%5] -> a[0] > a[1]
        a[1] > a[(1+1)%5] -> a[1] > a[2]
        .
        a[4] > a[(4+1)%5] -> a[4] > a[0] -> a[n-1] > a[0] case */

        for(int i=0; i<n; i++){
            if(nums[i]>nums[(i+1)%n])
                count++;
        }
        return count<=1;
    }
};