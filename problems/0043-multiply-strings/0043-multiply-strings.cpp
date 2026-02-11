class Solution {
public:
    string multiply(string num1, string num2) {
        /*Let n and m be the lengths of num1 and num2.
The result of multiplying two numbers with n and m digits can have at most n + m digits, so we initialize a vector of size n + m.

Traverse both strings from right to left:

Multiply the digits num1[i] and num2[j].
Add the product to the existing value at position i + j + 1.
Store the current digit at i + j + 1 and carry the overflow to i + j.*/
        string ans = "";
        if(num1=="0" || num2=="0")
            return "0";
        int n = num1.length();
        int m = num2.length();
        vector<int> res(n+m);
        for(int i=n-1; i>=0; i--) {
            for(int j=m-1; j>=0; j--) {
                int prod = (num1[i]-'0')*(num2[j]-'0');
                int sum = prod+res[i+j+1];
                res[i+j+1] = sum%10;
                res[i+j] += sum/10;
            }
        }
        int i=0;
        while(i<res.size() && res[i]==0) i++;
        for(; i<res.size(); i++)
            ans.push_back(res[i]+'0');

        return ans.empty()?"0":ans;
    }
};