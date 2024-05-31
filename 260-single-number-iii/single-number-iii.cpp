class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_val = 0;
        for (auto i: nums){
            xor_val = xor_val ^ i;
        }
        int a = 0;
        int b = 0;
        int diff_bit = 1;
        while (!(diff_bit & xor_val)){
            diff_bit = diff_bit<<1;
        }
        for (auto i: nums){
            if (diff_bit & i) a = a^i;
            else b = b^i;
        }
        return {a,b};
    }
};