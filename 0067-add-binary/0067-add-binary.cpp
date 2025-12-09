class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.length()-1;
        int m = b.length()-1;
        int carry = 0, sum = 0;
        string ans;
        while(n>=0 || m>=0 || carry) {
            sum = carry;
            if(n>=0) sum += a[n]-'0'; //if '1' then 49 and we need 1 so subtract '0' which is 48
            if(m>=0) sum += b[m]-'0';
            
            //sum % 2  → gives the correct bit to store in the answer.
            // sum / 2  → gives the carry.
            ans.push_back((sum%2)+'0');

            carry = sum/2;

            n--;
            m--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};