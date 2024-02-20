class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,n=nums.size();
        int x=0;
        for(i=0;i<n;i++){
            x=x^nums[i];
        }
        for(i=0;i<=n;i++){
            x=x^i;
        }
        return x;
    }
};