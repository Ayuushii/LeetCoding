class Solution {
public:
    bool hasAlternatingBits(int n) {
        /* Solution 1: Mod by 2 solution - To covert to binary, we do n%2 
        which gives the remainder (0 or 1) and then do n/2 (Every bit is 2x     the       current*/
        /* int prev_r = n%2;
        n/=2;
        while(n) {
            int r = n%2;
            n/=2;
            if(prev_r==r)
                return false;
            prev_r = r;
        }
        return true; */

        /*Solution 2: Bit manipulation
        Doing XOR or a binary number with it's right-shifted version gives seq of 1s
        Eg: 6 is 110 >>1 is 011 and 110^011 is not 11111...
        Eg; 5 is 101 >>1 is 010 and 101^010 is 1111... */

        uint x = n^(n >> 1);
        if((x&(x+1))==0)
            return true;
        return false;
    }
};