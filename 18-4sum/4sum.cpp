class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        if (nums.size()<4) return {}; 
        sort(nums.begin(),nums.end());
        for (int i = 0; i<nums.size()-3; i++){
            for (int j = i+1; j<nums.size()-2; j++){
                int k = j+1;
                int l = nums.size()-1;
                long long temp = (long long)target-(long long)nums[i]-(long long)nums[j];
                while (k<l){
                    long long sum = nums[k]+nums[l];
                    if (sum==temp){
                        ans.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if (sum<temp) k++;
                    else l--;
                }
            }
        }
        vector<vector<int>> res;
        for (vector<int> vec: ans){
            res.push_back(vec);
        }
        return res;
    }
};