class Solution {
public:
    bool checkValidString(string s) {
        stack<int> par , ast;
        for (int i=0; i<s.size(); i++){
            if (s[i] == '(') par.push(i);
            else if (s[i] == '*') ast.push(i);
            else{
                if (!par.empty()) par.pop();
                else if (!ast.empty()) ast.pop();
                else return false;
            }
        }
        while (!par.empty() && !ast.empty()){
            if (par.top() > ast.top()) return false;
            par.pop();
            ast.pop();
        }
        return par.empty();
    }
};