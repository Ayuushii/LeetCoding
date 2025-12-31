class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(!isalnum(s[i])) {
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            s[i]=std::tolower(s[i]);
            s[j]=std::tolower(s[j]);
            if(s[i]!=s[j]){
                cout<<s[i]<<" "<<s[j]<<endl;
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};