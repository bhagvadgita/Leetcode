class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        int maxi = INT_MIN;
        while (i<j){
            int sum = nums[i]+nums[j];
            if (sum==0){
                maxi = max(maxi,nums[j]);
                i++;
                j--;
            }
            else if (sum>0){
                j--;
            }
            else{
                i++;
            }
        }
        return maxi!=INT_MIN?maxi:-1;
    }
};