class Solution {
public:
    vector<string> ans;
    char change_case(char c){
        if(isupper(c))
            return tolower(c);
        else
            return toupper(c);
    }
    void solve(string &ip, string &op, int i){
        if(i==ip.length()){
            ans.push_back(op);
            return;
        }
        if(isdigit(ip[i])){
            op.push_back(ip[i]);
            solve(ip, op, i+1);
            op.pop_back();
            return;
        }
        op.push_back(ip[i]);
        solve(ip, op, i+1);
        op.pop_back();
        op.push_back(change_case(ip[i]));
        solve(ip, op, i+1);
        op.pop_back();
    }
    vector<string> letterCasePermutation(string s) {
        string op;
        solve(s, op, 0);
        return ans;
    }
};