class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_so_far = INT_MAX;
        int profit = INT_MIN;

        for(int p: prices) {
            min_so_far = min(min_so_far, p);
            profit = max(profit, p-min_so_far);
        }
        return profit;
    }
};