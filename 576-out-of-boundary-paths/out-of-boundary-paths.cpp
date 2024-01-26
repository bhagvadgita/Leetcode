class Solution {
public:
    const int mod = 1e9 + 7;
    vector<vector<vector<int>>> dp;
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        dp = vector<vector<vector<int>>>(m, vector<vector<int>>(n, vector<int>(maxMove + 1, -1)));
        return solve(m, n, maxMove, startRow, startColumn);
    }
    
    int solve(int m, int n, int move, int row, int col){
        if (row < 0 || row >= m || col < 0 || col >= n){
            return 1;
        }
        if (move == 0){
            return 0;
        }
        if (dp[row][col][move] != -1){
            return dp[row][col][move];
        }
        int ans = 0;
        ans = (ans + solve(m, n, move - 1, row - 1, col)) % mod;
        ans = (ans + solve(m, n, move - 1, row + 1, col)) % mod;
        ans = (ans + solve(m, n, move - 1, row, col - 1)) % mod;
        ans = (ans + solve(m, n, move - 1, row, col + 1)) % mod;
        dp[row][col][move] = ans;
        return ans;
    }
};
