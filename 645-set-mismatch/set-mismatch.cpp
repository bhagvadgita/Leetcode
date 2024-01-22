class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> arr(nums.size()+1);
        vector<int> result(2);
        sort(nums.begin(),nums.end());
        for (int i=0; i<nums.size(); i++){
            arr[nums[i]]++;
        }
        auto it = find(arr.begin(),arr.end(),2);
        result[0]=distance(arr.begin(),it);
        it = find(arr.begin()+1,arr.end(),0);
        result[1]=distance(arr.begin(),it);
        return result;
    }
};