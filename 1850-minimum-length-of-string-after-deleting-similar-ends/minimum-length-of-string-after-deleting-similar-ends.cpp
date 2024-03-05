class Solution {
public:
    int minimumLength(string s) {
        int i = 0;
        int j = s.size()-1;
        while (i<j){
            if (s[i]==s[j]){
                char c = s[i];
                while (i<=j && s[i]==c) ++i;
                while (i<=j && s[j]==c) --j;
            }
            else{
                break;
            }
        }
        return max(0,j-i+1);
    }
};