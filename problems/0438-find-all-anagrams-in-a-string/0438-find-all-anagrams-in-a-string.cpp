class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k = p.length();
        // cout<<k<<endl;
        unordered_map<char, int> freq;
        vector<int> ans;
        for(char &c: p) {
            freq[c]++;
            // cout<<c<<":"<<freq[c]<<endl;
        }
        int count = freq.size();
        int i=0;
        for(int j=0; j<s.length(); j++) {
            if(freq.find(s[j])!=freq.end()){
                freq[s[j]]--;
                // cout<<freq[s[j]]<<endl;
                if(freq[s[j]]==0)
                    count--;
            }
            if(j-i+1 == k) {
                // int flag = 0;
                // for(auto &it: freq){
                //     if(it.second!=0){
                //         flag=-1;
                //         break;
                //     }
                // }
                if(count==0)
                    ans.push_back(i);
                if(freq.find(s[i])!=freq.end()){
                    freq[s[i]]++;
                    if(freq[s[i]]==1)
                        count++;
                }
                i++;
            }
        }
        return ans;
    }
};