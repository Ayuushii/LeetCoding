class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        vector<int> ans;
        queue<int> q;
        int n=arr.size();
        int i=0, j=0;
        for(int j=0; j<n; j++) {
            if(arr[j]<0)
                q.push(arr[j]);
            //window foundk
            if((j-i+1)==k) {
                if(q.empty())
                    ans.push_back(0);
                else {
                int curr = q.front();
                ans.push_back(curr);
                if(arr[i]==curr)
                    q.pop();
                }
                i++;
            }
        }
        return ans;
    }
};