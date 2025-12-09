class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //Take the sum for first k numbers
        //This is the maxsum for now
        //from next number, subtract previous, add current to get new sum
        //Check if it is greater than maxsum, if yes change max

        double sum{};
        double maxsum{};

        for(int i=0; i<k; i++)
            sum+=nums[i];
        maxsum=sum;
        int i=0;
        for(int j=k; j<nums.size(); j++){
            sum=sum-nums[i]+nums[j];
            maxsum = max(maxsum, sum);
            i++;
        }

        return maxsum/k;
    }
};