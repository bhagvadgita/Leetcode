class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        vector<int> output;
        auto it = pos.begin();
        auto nt = neg.begin();
        for (int i = 0; i<nums.size(); i++){
            if (i%2==0){
                output.push_back(*it);
                it = it+1;
            }
            else{
                output.push_back(*nt);
                nt = nt+1;
            }
        }
        return output;
    }
};