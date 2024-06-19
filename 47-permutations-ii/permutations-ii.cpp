class Solution {
public:
    set<vector<int>> res;
    
    void perm(vector<int>& nums, int idx){
        if (idx>=nums.size()){
            res.insert(nums);
            return;
        }
        for (int i = idx; i<nums.size(); i++){
            swap(nums[i],nums[idx]);
            perm(nums,idx+1);
            swap(nums[i],nums[idx]);
        }
        return;
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        perm(nums,0);
        vector<vector<int>> ans;
        for (auto& elem: res){
            ans.push_back(elem);
        }
        return ans;
    }
};