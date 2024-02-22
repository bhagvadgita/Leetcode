class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        queue<pair<int,int>> q;
        for (int i = 0; i<row; i++){
            for (int j = 0; j<col; j++){
                if (matrix[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        while (!q.empty()){
            auto num = q.front();
            q.pop();
            int i = num.first;
            int j = num.second;
            for (int k = 0; k<col; k++){
                matrix[i][k]=0;
            }
            for (int k = 0; k<row; k++){
                matrix[k][j]=0;
            }
        }
    }
};