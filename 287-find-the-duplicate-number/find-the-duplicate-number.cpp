class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast  = 0;
        int slow = 0;
        vector<int> ans;
            do{
                slow = nums[slow];
                fast = nums[fast];
                fast = nums[fast];
            }
            while (slow!=fast);
            slow =0;
            while (slow!=fast){
                slow = nums[slow];
                fast = nums[fast];
            }
            return slow;
    }
};