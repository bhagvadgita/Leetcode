class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while (start<end){
            int mid = (start+end)/2;
            if (nums[mid]==target) return mid;
            if (nums[mid]<target) start = mid+1;
            else end = mid;
        }
        if (nums[start]<target) return start+1;
        else return start;
    }
};