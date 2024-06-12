class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin(),arr.end());
        if (arr[nums.size()-2]*2<=arr[nums.size()-1]){
            for (int i = 0; i<nums.size(); i++){
                if (nums[i]==arr[arr.size()-1]) return i;
            }
        }
        return -1;
    }
};