class Solution {
public:
    int kthGrammar(int n, int k) {

        if(n==1 && k==1)
            return 0;
        int mid = pow(2, n-1)/2;

        if(k<=mid)
            return kthGrammar(n-1, k);
        else
            return (kthGrammar(n-1, k-mid) ^ 1);
        

        /* Memory Limit exceeded using below
        vector<vector<int>> ans(n);
        if(n==1)
            return 0;
        ans[0].push_back(0);

        //cout<<"Size of ans[i-1]"<<ans[0].size();
       for(int i=1; i<n; i++){
            
            for(int &each : ans[i-1]){
                if(each==0){
                    ans[i].push_back(0);
                    ans[i].push_back(1);
                } else {
                    ans[i].push_back(1);
                    ans[i].push_back(0);
                }
            }
        }
        return ans[n-1][k-1];*/
    }
};