class Solution {
public:
    bool isNumber(string s) {
        int n = s.length();
        int i=0;
        bool seenDigit = false;
        bool seenDot = false;
        bool seenExp = false;

        while(i<n && s[i]==' ')
            i++;
        
        if(i<n && s[i]=='+' || s[i]=='-')
            i++;
        
        while(i<n) {
            if(isdigit(s[i])) {
                seenDigit=true;
            } else if (s[i]=='.') {
                if(seenDot || seenExp)
                    return false;
                seenDot=true;
            } else if (s[i]=='e' || s[i]=='E') {
                if(seenExp || !seenDigit) {
                    return false;
                }
                seenExp = true;
                seenDigit = false;
                if(i+1<n && s[i+1]=='+' || s[i+1]=='-')
                    i++;
            } else
                return false;
            i++;
        }
        return seenDigit;
    }
};