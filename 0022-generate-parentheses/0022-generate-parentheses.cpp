class Solution {
public:
    vector<string> ans;
    void solve(string& op, int o, int c) {
        if (o == 0 && c == 0) {
            ans.push_back(op);
            return;
        }

        // if (o < c) {
        //     if (o > 0) {
        //         op.push_back('(');
        //         solve(op, o - 1, c);
        //         op.pop_back();
        //     }
        //     if (c > 0) {
        //         op.push_back(')');
        //         solve(op, o, c - 1);
        //         op.pop_back();
        //     }
        //     return;
        // }
        // op.push_back('(');
        // solve(op, o - 1, c);
        // op.pop_back();
        // return;
        if(o>c)
            return;
        if(o>0){
            op.push_back('(');
            solve(op, o-1, c);
            op.pop_back();
        }
        if(c>0){
            op.push_back(')');
            solve(op, o, c-1);
            op.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string op = "";
        solve(op, n, n);
        return ans;
    }
};