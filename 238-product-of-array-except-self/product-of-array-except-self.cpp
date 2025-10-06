class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int k = 1;
        int j = 1;
        vector<int> ans(nums.size());
        for (int i = 0; i<nums.size(); i++){
            ans[i] = j;
            j*= nums[i];
        }
        for (int i = nums.size()-1; i>=0; i--){
            ans[i]*=k;
            k*=nums[i];
        }
        return ans;
        
    }
};