class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 1;
        int j = 0;
        for (int i = 1; i<nums.size(); i++){
            if (nums[i]==nums[j]){
                nums[i] = INT_MAX;
            }
            else{
                j=i;
                ans++;
            }
        }
        sort(nums.begin(),nums.end());
        return ans;
    }
};