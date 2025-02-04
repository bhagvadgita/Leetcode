class Solution {
public:

    bool isOdd(int num){
        return num%2!=0;
    }

    bool isArraySpecial(vector<int>& nums) {
        if (nums.size()<2) return true;
        for (int i = 0; i<nums.size()-1; i++){
            if ((isOdd(nums[i]) && isOdd(nums[i+1])) || (!isOdd(nums[i]) && !isOdd(nums[i+1]))) return false;
        }
        return true;
    }
    
};