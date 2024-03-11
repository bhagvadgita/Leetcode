class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> ump;
        for (int i=0; i<s.size(); i++){
            ump[s[i]]++;
        }
        string ans = "";
        for (char c: order){
            while (ump[c]-->0){
                ans+=c;
            }
        }
        for (auto pair:ump){
            while (pair.second-->0){
                ans+= pair.first;
            }
        }
        return ans;
    }
};