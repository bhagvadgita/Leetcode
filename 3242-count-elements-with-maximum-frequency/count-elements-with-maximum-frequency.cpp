class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> ump;
        int max = 0;
        int c = 0;
        for (int i=0; i<nums.size(); i++){
            ump[nums[i]]++;
            if (ump[nums[i]]>max){
                max = ump[nums[i]];
                c = 0;
            }
            if (ump[nums[i]]==max){
                c++;
            }
        }
        return c*max;
    }
};