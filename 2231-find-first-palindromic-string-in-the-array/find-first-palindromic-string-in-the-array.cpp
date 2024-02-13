class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (auto s: words){
            int n = s.size();
            int i = 0;
            int j = n - 1;
            int count = 1;
            while (i<j){
                if (s[i]!=s[j]){
                    count = 0;
                    i=j;
                }
                else{
                    i++;
                    j--;
                }
            }
            if (count == 1){
                return s;
            }
        }
        return "";
    }
};