class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum{};
        double maxsum{};
        int i=0;
        for(i=0; i<k; i++)
            sum+=nums[i];
        maxsum = sum;
        i=0;
        for(int j=k; j<n; j++){
            sum=sum-nums[i]+nums[j];
            maxsum = max(sum, maxsum);
            i++;
        }
        return maxsum/k;
    }
};