class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int if_found_letter = 0;
        for(int i = s.size()-1;i>=0;i--){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
                count++;
                if_found_letter=1;
            }
            else if(s[i]==' ' && if_found_letter==1)
                break;
        }
        return count;
    }
};