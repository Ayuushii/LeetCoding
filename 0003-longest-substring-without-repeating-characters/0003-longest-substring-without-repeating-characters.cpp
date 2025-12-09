class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, j=0;
        int max_len = INT_MIN;
        unordered_map<char, int> freq;

        for(j=0; j<s.length(); j++) {
            freq[s[j]]++;
            if(freq.size() == j-i+1)
                max_len=max(max_len, j-i+1);
            else if(freq.size() < j-i+1) {
                while(freq.size()<j-i+1){
                    freq[s[i]]--;
                    if(freq[s[i]]==0)
                        freq.erase(s[i]);
                    i++;
                }
            }
        }
        return max_len==INT_MIN?0:max_len;
    }
};