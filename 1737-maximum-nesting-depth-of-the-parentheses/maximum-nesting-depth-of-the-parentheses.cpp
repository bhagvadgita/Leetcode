class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int depth = 0;
        int ans = 0;
        for (char c : s){
            if (c=='('){
                st.push(c);
                depth++;
                ans = max(ans,depth);
            }
            else if (c==')'){
                st.pop();
                depth--;
            }
        }
        return ans;
        
    }
};