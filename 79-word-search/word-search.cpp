class Solution {
public:

    bool check(vector<vector<char>>& board, string& word, int idx, int i, int j){
        if (idx==word.size()) return true;
        if (i<0 || j<0 || i==board.size() || j==board[0].size() || board[i][j]!=word[idx]) return false;
        char temp = board[i][j];
        board[i][j] = '#';
        bool flag = check(board,word,idx+1,i+1,j) || check(board,word,idx+1,i-1,j) || check(board,word,idx+1,i,j+1) || check(board,word,idx+1,i,j-1);
        board[i][j] = temp;
        return flag;
    }

    bool exist(vector<vector<char>>& board, string word) {
        
        for (int i = 0; i<board.size(); i++){
            for (int j = 0; j<board[0].size(); j++){
                if (check(board,word,0,i,j)){
                    return true;
                }
            }
        }
        return false;
    }
};