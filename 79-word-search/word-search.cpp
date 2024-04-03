class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        for (int i = 0;i<board.size(); i++){
            for (int j = 0; j<board[0].size(); j++){
                if (board[i][j] == word[0]){
                    if (check(board,word,0,i,j)) return true;
                }
            }
        }
        return false;
    }
    bool check(vector<vector<char>>& board, string& word, int idx, int i, int j){
        if (idx == word.size()) return true;
        if (i<0 || j<0 || i>=board.size() || j>=board[0].size() || word[idx]!= board[i][j]) return false;
        char temp = board[i][j];
        board[i][j] = '#';
        bool found = (check(board,word,idx+1,i+1,j) || check(board,word,idx+1,i-1,j) || check(board,word,idx+1,i,j+1) || check(board,word,idx+1,i,j-1));
        board[i][j] = temp;
        return found;
    }
};