class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> ump;
        vector<vector<string>> ans;
        for (int i = 0; i<strs.size(); i++){
            string str = strs[i];
            sort(str.begin(),str.end());
            if (ump.find(str)!=ump.end()){
                ans[ump[str]].push_back(strs[i]);
            }
            else{
                ump[str] = ans.size();
                ans.push_back({strs[i]});
            }
        }
        return ans;
    }
};