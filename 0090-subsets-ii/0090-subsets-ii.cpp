class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &ip, vector<int> &op, int i){
        //Sets solution - Not optimal, was pushing to set.
        if(i==ip.size()){
            ans.push_back(op);
            return;
        }
        int ex_idx = i+1; //Exclusion index. 
        while(ex_idx<ip.size() && ip[ex_idx]==ip[ex_idx-1]) ex_idx++;
        solve(ip, op, ex_idx);
        op.push_back(ip[i]);
        solve(ip, op, i+1);
        op.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> op;
        //set<vector<int>> res;
        sort(nums.begin(), nums.end());
        /* Sets solution - not optimal
        solve(nums, op, 0, res);
        for(auto each: res){
            ans.push_back(each);
        } */

        solve(nums, op, 0);
        return ans;
    }
};