class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mid=0;
        if (n%2==0){
            mid=n/2;
        }
        else {
            mid=n/2;
        }
        int sum=0;
        int res=nums[mid];
        for (int i=0; i<nums.size(); i++){
            sum+=abs(nums[i]-res);
        }
        return sum;
    }
};