class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> um;
        for (int i=0; i<arr.size();i++){
            um[arr[i]]++;
        }
        vector<pair<int,int>> dp;
        for (auto it:um){
            dp.push_back(it);
        }
        sort(dp.begin(),dp.end(),[](auto a,auto b){
            return a.second<b.second;
        });
        int count = 0;
        for (auto it : dp){
            if (k>=it.second){
                k-=it.second;
                count ++;
            }
            else{
                break;
            }
        }
        return size(dp)-count;
    }
};