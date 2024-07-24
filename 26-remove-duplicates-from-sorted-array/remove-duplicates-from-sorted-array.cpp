class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int maxi = nums[nums.size()-1]+1;
        for (int i = 0; i<nums.size()-1; i++){
            if (nums[i]==nums[i+1]) nums[i] = maxi;
        }
        sort(nums.begin(),nums.end());
        for (int i = 0; i<nums.size(); i++){
            if (nums[i] == maxi) return i;
        }
        return nums.size();
    }
};