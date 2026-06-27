class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> st;
        string cur = "";
        int n = 0;
        for(char c : s) {
            if(isdigit(c)) n = n*10 + (c-'0');
            else if(c == '[') { num.push(n); st.push(cur); n=0; cur=""; }
            else if(c == ']') {
                string tmp = cur; cur = st.top(); st.pop();
                int k = num.top(); num.pop();
                while(k--) cur += tmp;
            } else cur += c;
        }
        return cur;
    }
};
