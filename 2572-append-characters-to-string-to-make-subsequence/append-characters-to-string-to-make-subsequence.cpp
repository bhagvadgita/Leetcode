class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0;
        int j = 0;
        while (i<s.size() && j<t.size()){
            if (s[i]==t[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        if (i==s.size()){
            if (j==t.size()) return 0;
            else return t.size()-j;
        }
        else{
            return 0;
        }
    }
};