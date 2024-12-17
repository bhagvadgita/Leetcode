class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int freq = 1;
        int j = 0;
        int ans = 1;
        for (int i = 1; i<nums.size(); i++){
            if (nums[i] == nums[j]){
                freq++;
                if (freq>2) nums[i] = INT_MAX;
                else ans++;
            }
            else {
                freq = 1;
                j=i;
                ans++;
            }
        }
        sort(nums.begin(),nums.end());
        return ans;

    }
};