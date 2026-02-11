class Solution {
public:
    int calculate(string s) {
        //Make stack for addition
        stack<int> st;
        //if lastop + then just push to stack
        //if lastop - then make curr num -ve and push to stack
        //if lastop / then pop num, divide it by currnum and push to stack
        //if lastop * then pop num, multiply by currnum and push to stack
        char lastop = '+';
        int currnum = 0;
        int i=0;
        int n = s.length();
        
        for(int i=0; i<n; i++) {
            char ch = s[i];
            if(isdigit(ch)) {
                currnum = currnum*10+(ch-'0');
            }
            if(!isdigit(ch) && !isspace(ch) || i==n-1) {
                if(lastop=='+')
                    st.push(currnum);
                else if(lastop=='-')
                    st.push(-currnum);
                else if(lastop=='/') {
                    int top = st.top();
                    st.pop();
                    currnum = top/currnum;
                    st.push(currnum);
                } else if(lastop=='*') {
                    int top = st.top();
                    st.pop();
                    currnum = top*currnum;
                    st.push(currnum);
                }
                lastop = ch;
                currnum = 0;
            }
        }
        int res = 0;
        while(!st.empty()) {
            res+=st.top();
            st.pop();
        }
        return res;
    }
};