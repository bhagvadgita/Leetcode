class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(),strs.end());
        int n = strs.size()-1;
        for (int i=0; i<strs[0].size();i++){
            if (strs[0][i]==strs[n][i]){
                ans+=strs[0][i];
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};