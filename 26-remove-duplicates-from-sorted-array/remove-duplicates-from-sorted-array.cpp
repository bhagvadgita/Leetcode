class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> unum;
        for (int i = 0; i<nums.size(); i++){
            if (find(unum.begin(),unum.end(),nums[i])==unum.end()){
                unum.push_back(nums[i]);
            }
        }
        for (int i = 0; i<unum.size(); i++){
            nums[i] = unum[i];
        }
        return unum.size();
    }
};