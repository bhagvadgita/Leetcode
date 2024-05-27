class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums[0];
        int n = nums.size();
        if (nums[0]>=n) return n;
        for (int i = 1; i<n; i++){
            if (nums[n-i]>=i && (n-i-1<0 || nums[n-i-1]<i)) return i;
        }
        return -1;
    }
};