class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto &ch: s) {
            if(ch=='(' || ch=='{' || ch=='[')
                st.push(ch);
            else if (ch==')' || ch=='}' || ch==']') {
                if(st.empty())
                    return false; 
                char topchar = st.top();
                if(topchar=='(' && ch==')' || topchar=='{' && ch=='}' || topchar=='[' && ch==']') {
                    st.pop();
                    continue;
                } else
                    return false;
            }
        }
        return st.empty()?true:false;
    }
};