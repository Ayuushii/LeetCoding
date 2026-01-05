class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> q;
        vector<int> ans;
        int i=0;
        for(int j=0; j<nums.size(); j++) {
            q.push({nums[j], j});
            if(j-i+1==k) {
                while(q.top().second < i) 
                    q.pop();
                ans.push_back(q.top().first);
                i++;
            }
        }
        return ans;
    }
};