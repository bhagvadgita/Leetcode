class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for (int i = 0; i<nums.size(); i++){
            if (nums[i]!=val){
                ans.push_back(nums[i]);
            }
            else {
                nums[i] = INT_MAX;
            }
        }
        sort(nums.begin(),nums.end());
        return ans.size();
    }
};