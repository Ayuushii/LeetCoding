class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> nodups;
        for(int a: nums){
            nodups.insert(a);
        }
        if(nodups.size() == nums.size())
            return false;
        else
            return true;
    }
};