class Solution {
  public:
    vector<int> maxAdj(vector<int> &arr) {
        // code here
        vector<int> ans;
        int n = arr.size();
        for(int i=0;i<n-1;i++){
            ans.push_back(max(arr[i],arr[i+1]));
        }
        return ans;
    }
};