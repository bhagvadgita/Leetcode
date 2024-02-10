class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>right(n,1);
        vector<int>left(n,1);
        vector<int>result(n);
        int ans1=1;
        int ans2=1;
        for(int i=1;i<n;i++){
            ans1*=nums[i-1];
            left[i]=ans1;
        }
        for(int i=n-2;i>=0;i--){
            ans2*=nums[i+1];
            right[i]=ans2;
        }
        for(int i=0;i<n;i++){
            result[i]=left[i]*right[i];
        }
        return result;
    }
};