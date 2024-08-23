class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curr = nums[0];
        for (int i = 0; i<nums.size(); i++){
            if (curr<0) return false;
            if (nums[i]>curr) curr = nums[i];
            curr--;
        }
        return true;
    }
};