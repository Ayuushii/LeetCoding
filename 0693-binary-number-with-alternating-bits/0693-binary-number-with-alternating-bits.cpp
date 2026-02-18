class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev_r = n%2;
        n/=2;
        while(n) {
            int r = n%2;
            n/=2;
            if(prev_r==r)
                return false;
            prev_r = r;
        }
        return true;
    }
};