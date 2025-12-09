class Solution {
public:
    int fibDp(int n, vector<int> &mem) {
        if(n==0 || n==1)
            return n;
        if(mem[n]!=-1)
            return mem[n];
        mem[n] = fibDp(n-1,mem)+fibDp(n-2,mem);
        return mem[n];
    }
    int fib(int n) {
        vector<int> mem(n+1,-1);
        return fibDp(n, mem);
    }
};