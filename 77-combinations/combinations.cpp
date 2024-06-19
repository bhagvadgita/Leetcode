class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res = {{}};
        vector<int> nums;
        for (int i = 1; i<=n; i++){
            nums.push_back(i);
        }
        for (int i = 0; i<n; i++){
            int a = res.size();
            for (int j = 0; j<a; j++){
                res.push_back(res[j]);
                res.back().push_back(nums[i]);
            }
        }
        vector<vector<int>> ans;
        for (auto elem: res){
            if (elem.size()==k) ans.push_back(elem);
        }
        return ans;
    }
};