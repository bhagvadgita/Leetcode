class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i<nums.size(); i++){
            if (nums[abs(nums[i])-1]<0){
                ans.push_back(abs(nums[i]));
            }
            else{
                nums[abs(nums[i])-1] = 0 - nums[abs(nums[i])-1];
            }
        }
        auto it = unique(ans.begin(),ans.end());
        if (it!=ans.end()) ans.erase(it,ans.end());
        return ans;
    }
};