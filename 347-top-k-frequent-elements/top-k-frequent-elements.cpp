class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        for (int i = 0; i<nums.size(); i++){
            ump[nums[i]]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        for (auto n: ump){
            freq[n.second].push_back(n.first);
        }
        vector<int> res;
        for (int i = freq.size() - 1; i >= 0; i--) {
            for (int num : freq[i]) {
                res.push_back(num);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return {};
    }
};