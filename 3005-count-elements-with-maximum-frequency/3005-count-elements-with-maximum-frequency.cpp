class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        int max_freq=INT_MIN;
        for(int i=0;i<nums.size();i++) {
            freq[nums[i]]++;
            if(freq[nums[i]]>max_freq)
                max_freq = freq[nums[i]];
        }
        int count = 0;
        cout<<max_freq<<endl;
        for(auto x: freq){
            if(x.second==max_freq)
                count+=x.second;
        }
        return count;
    }
};