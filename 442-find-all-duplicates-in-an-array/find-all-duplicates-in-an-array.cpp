class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for (int tmp: nums){
            if (nums[abs(tmp)-1] > 0){
                nums[abs(tmp)-1] *= -1;
            }
            else{
                ans.push_back(abs(tmp));
            }
        }
        return ans;
    }
};