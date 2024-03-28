class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count= 0;
        int left = 0;
        int right = 0;
        int mul = 1;
        if (k<=1) return 0;
        while (right<nums.size()){
            mul*=nums[right];
            while (mul>=k) mul/=nums[left++];
            count+=(1+(right-left));
            right++; 
        }
        return count;
    }
};