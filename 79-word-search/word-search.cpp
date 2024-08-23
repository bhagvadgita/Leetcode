class Solution {
public:

    bool check(vector<vector<char>>& board, string& word, int x, int y, int idx){
        if (idx>=word.size()) return true;
        if (x>=board.size() || x<0 || y<0 || y>=board[0].size() || board[x][y]!=word[idx]){
            return false;
        }
        char temp = board[x][y];
        board[x][y] = '#';
        if (check(board,word,x+1,y,idx+1) || check(board,word,x-1,y,idx+1) || check(board,word,x,y+1,idx+1) || check(board,word,x,y-1,idx+1)){
            board[x][y] = temp;
            return true;
        }
        board[x][y] = temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i<board.size(); i++){
            for (int j = 0; j<board[0].size(); j++){
                if (board[i][j]==word[0] && check(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};