class Solution {
public:
    vector<string> ans;

    void generate(string& str, int n, int o, int c){
        if (str.size()==(2*n)){
            ans.push_back(str);
            return;
        }
        if (o<n){
            str.push_back('(');
            generate(str,n,o+1,c);
            str.pop_back();
        }
        if (c<o){
            str.push_back(')');
            generate(str,n,o,c+1);
            str.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string str = "";
        generate(str,n,0,0);
        return ans;
    }
};