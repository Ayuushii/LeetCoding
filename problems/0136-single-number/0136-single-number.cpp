class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /* SOLUTION 1 Below code uses map to store frequencies
        unordered_map<int,int> mp;
        for(int num: nums) {
            mp[num]++;
        }
        for(auto num: mp){
            if(num.second!=2)
                return num.first;
        }
        return 0; */
        int xorred = 0;
        for(int num: nums) {
            xorred = xorred ^ num;
        }
        return xorred;
    }
};