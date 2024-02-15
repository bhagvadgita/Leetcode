class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long ans = -1;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int j = n-1;
        long long sum = 0;
        for (int i = 0; i<nums.size(); i++){
            sum+=nums[i];
        }
        while (j>1){
            sum = sum - nums[j];
            if (sum>nums[j]){
                ans = max(ans,sum+nums[j]);
                j--;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};