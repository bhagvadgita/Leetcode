class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> ump;
        int sum=0;
        int max_len=0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0) sum-=1;
            else sum+=1;
            if (ump.find(sum)!=ump.end()){
                max_len = max(i-ump[sum],max_len);
            }
            else if (sum==0){
                max_len = i+1;
            }
            else{
                ump[sum]=i;
            }
        }
        return max_len;
    }
};