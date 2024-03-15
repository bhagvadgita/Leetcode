class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0]=1;
        int mul = 1;
        for (int i=1; i<n; i++){
            mul*=nums[i-1];
            left[i]=mul;
        }
        right[n-1]=1;
        mul =1;
        for (int i=n-2; i>=0; i--){
            mul*=nums[i+1];
            right[i]=mul;
        }
        vector<int> res(n);
        for (int i=0; i<n; i++){
            res[i]=left[i]*right[i];
        }
        return res;
    }
};