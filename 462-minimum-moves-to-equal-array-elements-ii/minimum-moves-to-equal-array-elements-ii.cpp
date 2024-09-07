class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid = (nums.size()-1)/2;
        int ans = 0;
        int res = nums[mid];
        for (int i = 0; i<nums.size(); i++){
            ans+=abs(res-nums[i]);
        }
        return ans;
    }
};