class Solution {
public:
    bool val(string s, int left, int right) {
        while(left<right) {
            if(s[left]!=s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;

        while(left<right) {
            if(s[left]!=s[right]) {
               //First wrong char found. Check if removing either side
               //results in a palindrome. If any of them work then we 
               //can make a palindrome with one char removed.
                return val(s, left+1, right) || val(s, left, right-1);
            }
            left++;
            right--;
        }
        return true;
    }
};