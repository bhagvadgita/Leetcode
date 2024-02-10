class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        int n = s.size();
        for (int i=0; i<n; i++){
            string f="";
            string b="";
            for (int j=i; j<n; j++){
                f+=s[j];
                b = s[j] + b;
                if (f==b) ans++;
            }
        }
        return ans;
    }
};