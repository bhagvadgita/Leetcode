class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        int count = 0;
        for (int i = 0; i<s.size(); i++){
            if (s[i] == ')' && count<=0){
                continue;
            }
            else if (s[i]==')'){
                count--;
            }
            else if (s[i]=='('){
                count++;
            }
            st.push(s[i]);
        }
        string ans = "";
        while (!st.empty()){
            if (st.top()=='(' && count>0){
                count--;
                st.pop();
                continue;
            }
            else{
                char temp = st.top();
                st.pop();
                ans+=temp;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};