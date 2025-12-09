class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0, j=0, max_win = INT_MIN;
        vector<int> ans, temp;
        for(j=0; j<nums.size(); j++){
            while(!temp.empty() && temp.back()<nums[j]){
                temp.pop_back();
            }
            temp.push_back(nums[j]);
            if(j-i+1 == k){
                int max = temp.front();
                ans.push_back(max);
                if(nums[i]==max)
                    temp.erase(temp.begin());
                i++;
            }
        }
        return ans;
    }
};