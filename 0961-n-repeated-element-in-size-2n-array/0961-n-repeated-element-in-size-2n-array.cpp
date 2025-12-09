class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int len = nums.size();
        int n = len/2 + 1;
        
        //Number of unique elements - n
        //one ele is repeated n-1 times, find which
        //length is n
        // 2,1,2,5,3,2
        // n = 4 -> 1,2,3,5
        // 2 is repeated n-1 (3) times

        unordered_map<int,int> freq{};

        for(int i=0;i<len;i++){
            if(freq[nums[i]]>0)
                return nums[i];
            freq[nums[i]]++;
        }
        return 0;
    }
};