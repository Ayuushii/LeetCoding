// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        int k = pat.length();
        unordered_map<char, int> mp;
        int count=0;
        for(char c: pat) {
            mp[c]++;
        }
        int i=0;
        for(int j=0; j<txt.length(); j++) {
            if(mp.find(txt[j])!=mp.end())
                mp[txt[j]]--;
            if(j-i+1 == k) {
                //window hit, the freq of each should be 0
                int flag=0;
                for(const auto &e: mp){
                    if(e.second!=0){
                        flag=1;
                        break;
                    }
                }
                //All freq of pat were 0 so found.
                if(flag==0)
                    count++;
                if(mp.find(txt[i])!=mp.end())
                    mp[txt[i]]++;
                i++;
            }
        }
        return count;
    }
};