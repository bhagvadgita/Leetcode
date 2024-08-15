class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> vec;
        for (int i = 0; i<matrix.size(); i++){
            for (int j = 0; j<matrix[0].size(); j++){
                if (matrix[i][j]==0) vec.push_back({i,j});
            }
        }
        for (auto coor: vec){
            int x = coor.first;
            int y = coor.second;
            for (int i = 0; i<matrix.size(); i++) matrix[i][y] = 0;
            for (int i = 0; i<matrix[0].size(); i++) matrix[x][i] = 0;
        }
    }
};