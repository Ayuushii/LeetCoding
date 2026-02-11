class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int i=0, j=0;
        int n = nums.size();
        int mindiff = INT_MAX;

        sort(nums.begin(), nums.end());
        while(j<n) {
            if(j-i+1 < k)
                j++;
            if(j-i+1 == k) {
                mindiff = min(mindiff, nums[j]-nums[i]);
                i++;
                j++;
            }
        }
        return mindiff;
    }
};