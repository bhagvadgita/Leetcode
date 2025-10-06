class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        for(int i = 0; i<nums.size(); i++){
            ump[nums[i]]++;
        }
        vector<vector<int>> free(nums.size()+1);
        for (auto vec: ump){
            free[vec.second].push_back(vec.first);
        }
        vector<int> ans;
        for (int i = free.size()-1; i>=0; i--){
            for (auto num: free[i]){
                ans.push_back(num);
                if (ans.size() == k) return ans;
            }
        }
        return ans;
    }
};