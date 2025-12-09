class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Use hashmap where element is the key and its value is the index.
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) {
            int x = nums[i];
            int y = target-nums[i];
            if(mp.find(y)!=mp.end())
                return {mp[y],i};
            mp[x] = i;
        }
        return {-1,-1};
    }
};