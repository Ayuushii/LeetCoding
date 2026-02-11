class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        priority_queue<pair<int,int>> q;
        vector<int> result(k);

        for(auto &num: nums)
            freq[num]++;

        for(auto each:freq)
            q.push({each.second, each.first});

        
        for(int i=0;i<k;i++){
            result[i]=q.top().second;
            q.pop();
        }
        return result;
    }
};