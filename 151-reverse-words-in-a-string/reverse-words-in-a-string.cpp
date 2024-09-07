class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string str = "";

        for (int i = 0; i<s.size(); i++){
            if (s[i]==' '){
                st.push(str);
                str = "";
            }
            else str.push_back(s[i]);
        }
        st.push(str);
        str = "";
        while (!st.empty()){
            if (st.top().size()>0){
                str+= st.top()+" ";
            }
            st.pop();
        }
        str.pop_back();
        return str;
    }
};