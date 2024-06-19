class Solution {
public:
    void func(vector<vector<int>>&ans,vector<int>ds,vector<int>&arr,int ind){
//         ios_base::sync_with_stdio(false);
// cin.tie(NULL);

        int n=arr.size();

            ans.push_back(ds);


        for(int i=ind; i<n; i++){
              if(i>ind && arr[i]==arr[i-1]) continue;

                ds.push_back(arr[i]);
                func(ans,ds,arr,i+1);
                ds.pop_back();

                

        }
           

    }



    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
cin.tie(NULL);

        vector<vector<int>>ans;

        vector<int>ds;
        sort(nums.begin(),nums.end());

        func(ans,ds,nums,0);
        return ans;


        
    }
};