class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        if (nums.size()<=1) return nums.size();
        int ans = INT_MIN;
        unordered_map<int,int> ump;
        while (right<nums.size()){
            if (ump[nums[right]]<k) ump[nums[right++]]++;
            else{
                ans = max(ans,(right-left));
                while(ump[nums[right]]==k) ump[nums[left++]]--;
            }
        }
        return max(ans,right-left);
    }
};