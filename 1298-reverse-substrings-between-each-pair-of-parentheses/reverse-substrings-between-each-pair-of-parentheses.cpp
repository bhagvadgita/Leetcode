class Solution {
public:
    string reverseParentheses(string& s) {
        stack<char> st;
        for (int i = 0; i<s.size(); i++){
            if (s[i]==')'){
                queue<char> q;
                while (st.top()!='('){
                    q.push(st.top());
                    st.pop();
                }
                st.pop();
                while (!q.empty()){
                    st.push(q.front());
                    q.pop();
                }
                continue;
            }
            st.push(s[i]);
        }
        string ans = "";
        while (!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};