class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n-2,vector<int>(n-2));
        for (int i = 0; i<n-2; i++){
            for (int j = 0; j<n-2; j++){
                int x = i+1;
                int y = j+1;
                int maxi = max({grid[x-1][y-1],grid[x-1][y],grid[x-1][y+1],grid[x][y-1],grid[x][y],grid[x][y+1],grid[x+1][y-1],grid[x+1][y],grid[x+1][y+1]});
                ans[i][j] = maxi;
            }
        }
        return ans;
    }
};