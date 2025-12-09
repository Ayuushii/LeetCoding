class Solution {
public:
    int solve(vector<int> &ppl, int k, int i){
        if(ppl.size()==1)
            return ppl[0];
        int kill = (i+k-1)%ppl.size();
        ppl.erase(ppl.begin()+kill);
        return solve(ppl, k, kill);
    }   

    int findTheWinner(int n, int k) {
        vector<int> ppl;
        for(int i=1; i<=n; i++)
            ppl.push_back(i);
        return solve(ppl, k, 0);
    }
};