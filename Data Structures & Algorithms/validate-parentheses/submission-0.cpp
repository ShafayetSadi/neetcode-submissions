class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for (int i=0; i<s.size(); i++) {
            if (st.empty()) {
                if (s[i] == '[' or s[i] == '{' or s[i] == '(') st.push(s[i]);
                else return false;
            } else {
                if (s[i] == '[' or s[i] == '{' or s[i] == '(') st.push(s[i]);
                else {
                    if (s[i] == ']') {
                        if (st.top() == '[') st.pop();
                        else return false;
                    }
                    else if (s[i] == '}') {
                        if (st.top() == '{') st.pop();
                        else return false;
                    } else {
                        if (st.top() == '(') st.pop();
                        else return false;
                    }
                }
            }
        }
        return st.empty();
    }
};
