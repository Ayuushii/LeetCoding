class Solution {
  public:
    string modify(string& s) {
        // code here.
        for(int i=0;i<s.length();i++){
            if(isspace(s[i])){
                s.erase(s.begin()+i--);
            }
        }
        return s;
    }
};