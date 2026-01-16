class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);
        if(k==0) return res;
        int x = k;
        if(k<0) {
            reverse(code.begin(), code.end());
            x=-1*k;
        }
        int sum = 0;
        for(int i=0; i<x; i++){
            sum+=code[(i+1)%n];
        }
        res[0] = sum;
        for(int i=1; i<n; i++) {
            sum = sum - code[i] + code[(i+x)%n];
            res[i] = sum;
        }
        if(k<0)
            reverse(res.begin(), res.end());
        return res;
    }   
};