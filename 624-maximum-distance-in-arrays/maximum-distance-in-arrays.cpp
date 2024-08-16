class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n = arrays.size(),
            mini = arrays[0][0],
            maxi = arrays[0][arrays[0].size()-1],
            maxDist = 0;

        for(int j=1; j<n; j++){
            int currMin = arrays[j][0];
            int currMax = arrays[j][arrays[j].size()-1];
            
            maxDist = max({ maxDist,abs(mini-currMax),abs(maxi-currMin)});
            mini = min(mini,currMin);
            maxi = max(maxi,currMax);
        }
        return maxDist;
    }
};