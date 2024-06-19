class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> res={{}};
        for (int i = 0; i<nums.size(); i++){
            int n = res.size();
            vector<vector<int>> currsubsets(res.begin(),res.end());
            for (auto elem: currsubsets){
                elem.push_back(nums[i]);
                res.insert(elem);
            }
        }
        vector<vector<int>> ans(res.begin(),res.end());
        return ans;
    }
};