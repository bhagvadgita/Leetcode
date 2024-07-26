class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<pair<int,int>> zero;
        for (int i = 0; i<row; i++){
            for (int j = 0; j<col; j++){
                if (matrix[i][j]==0) zero.push_back({i,j});
            }
        }
        for (pair<int,int> coord: zero){
            int x = coord.first;
            int y = coord.second;
            while (x>=0){
                matrix[x][y] = 0;
                x--;
            }
            x=0;
            while (x<row){
                matrix[x][y] = 0;
                x++;
            }
            x = coord.first;
            while (y>=0){
                matrix[x][y] = 0;
                y--;
            }
            y=0;
            while (y<col){
                matrix[x][y] = 0;
                y++;
            }
        }
    }
};