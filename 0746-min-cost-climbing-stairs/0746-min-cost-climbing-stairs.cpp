#include<algorithm>
class Solution {
public:
    /*int solve(int n, vector<int> &cost) {
        if(n<0)
            return 0;
        if(n==0 || n==1)
            return cost[n];
        
        int cost_curr = cost[n] + min(solve(n-1, cost),solve(n-2,cost));//cost_first:cost_second;
        return cost_curr;
    }*/

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1,-1);
        if(n==0 || n==1)
            return cost[n];
        dp[0] = cost[0];
        dp[1] = cost[1];
        if(dp[n]!=-1)
            return dp[n];
        int i;
        for(i=2;i<n;i++){
            dp[i] = min(dp[i-1],dp[i-2])+cost[i];
        }
        //cout<<i;
        //return min(solve(n-1, cost), solve(n-2,cost));
        int ans1 = dp[i-1];
        int ans2 = dp[i-2];
        //cout<<ans1<<"    "<<ans2;
        return min(ans1,ans2);
    }
};