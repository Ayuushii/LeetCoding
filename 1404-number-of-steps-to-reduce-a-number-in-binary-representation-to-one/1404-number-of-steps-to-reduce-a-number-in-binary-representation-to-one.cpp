class Solution {
public:
    
    int numSteps(string s) {
        //long long dec = 0;
        int n = s.length();
        //long long base = 1;
        int steps = 0;
        int carry = 0;

        for(int i=n-1; i>0; i--) {
            if(((s[i]-'0')&1) + carry == 1 ) {
                steps+=2;
                carry = 1;
            } else {
                steps++;
            }
        }

        // while(dec!=1) {
        //     if(dec%2==0)
        //         dec/=2;
        //     else
        //         dec+=1;
        //     steps++;
        // }
        return steps + carry;
    }
};