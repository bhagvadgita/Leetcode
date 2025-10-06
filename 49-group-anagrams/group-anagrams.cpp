class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ump;
        for (int i = 0; i<strs.size(); i++){
            string str = strs[i];
            sort(str.begin(),str.end());
            if (ump.find(str)!=ump.end()) ump[str].push_back(strs[i]);
            else ump[str] = {strs[i]};
        }
        vector<vector<string>> ans;
        for (auto vec: ump){
            ans.push_back(vec.second);
        }
        return ans;
    }
};