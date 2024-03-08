class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> ump;
        for (int i=0; i<nums.size(); i++){
            ump[nums[i]]++;
        }
        int max = 0;
        for (int i=0; i<nums.size(); i++){
            if (ump[nums[i]]>max){
                max = ump[nums[i]];
            }
        }
        int ans=0;
        for (unordered_map<int,int>:: iterator it = ump.begin(); it!=ump.end(); it++){
            if (it->second==max){
                ans++;
            }
        }
        return ans*max;
    }
};