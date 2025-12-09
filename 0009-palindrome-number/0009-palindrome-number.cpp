class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;
        int rem = 0;
        long rev = 0;
        int temp = x;
        while(temp!=0) {
            rem = temp%10;
            temp = temp/10;
            rev = rev*10 + rem;
        }
        cout << rev;
        
        return (rev == x);
    }
};