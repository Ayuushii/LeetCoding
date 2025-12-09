class Solution {
public:
    vector<vector<int>> res;
    void solve(vector<int> &ip, vector<int> &op, int i){
        if(i==ip.size()){
            res.push_back(op);
            return;
        }

        solve(ip, op, i+1);
        op.push_back(ip[i]);
        solve(ip, op, i+1);
        op.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> op;
        solve(nums, op, 0);
        return res;
    }
};