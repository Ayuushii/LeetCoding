class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int min_diff = INT_MAX;
        vector<vector<int>> ans;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i=1; i<n; i++) {
            min_diff = min(min_diff, abs(arr[i]-arr[i-1]));
        }
        for(int i=1; i<n; i++) {
            if(abs(arr[i]-arr[i-1])==min_diff)
                ans.push_back({arr[i-1], arr[i]});
        }
        return ans;
    }
};