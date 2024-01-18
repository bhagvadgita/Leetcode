class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows=img.size();
        int cols=img[0].size();
        vector<vector<int>> result(rows,vector<int> (cols));
        for (int i=0; i<rows; i++){
            for (int j=0; j<cols; j++){
                int sum=0;
                int count=0;
                for (int dx=-1; dx<=1; dx++){
                    for (int dy=-1; dy<=1; dy++){
                        int new_x=i+dx;
                        int new_y=j+dy;
                        if (new_x>=0 && new_x<rows && new_y>=0 && new_y<cols){
                            sum+=img[new_x][new_y];
                            count++;
                        }
                    }
                }
                result[i][j]=sum/count;
            }
        }
        return result;
    }
};