class Solution {
public:
    void gameOfLife(vector<vector<int>>& v) {
        int n = v.size(), m = v[0].size();
        vector<vector<int>> a = v;  // Create a copy of the board.
        
        // Iterate over each cell in the board.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int ans = 0;  // Initialize the count of live neighbors.

                // Check all eight possible neighbors.
                if (i + 1 < n) ans += v[i + 1][j];
                if (i + 1 < n && j - 1 >= 0) ans += v[i + 1][j - 1];
                if (i + 1 < n && j + 1 < m) ans += v[i + 1][j + 1];
                if (j - 1 >= 0) ans += v[i][j - 1];
                if (j + 1 < m) ans += v[i][j + 1];
                if (i - 1 >= 0) ans += v[i - 1][j];
                if (i - 1 >= 0 && j - 1 >= 0) ans += v[i - 1][j - 1];
                if (i - 1 >= 0 && j + 1 < m) ans += v[i - 1][j + 1];

                // Apply the Game of Life rules.
                if (v[i][j] == 1 && (ans < 2 || ans > 3)) a[i][j] = 0;  // Rule 1 and Rule 3.
                else if (v[i][j] == 0 && ans == 3) a[i][j] = 1;  // Rule 4.
            }
        }
        
        v = a;  // Update the original board with the new state.
    }
};