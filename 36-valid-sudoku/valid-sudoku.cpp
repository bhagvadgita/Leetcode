class Solution {
public:

    bool checkRowCol(vector<vector<char>> board, int x, int y){
        char ch = board[x][y];
        board[x][y] = '.';
        for (int i = 0; i<=8; i++) if (board[i][y] == ch || board[x][i] == ch) return false;
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> s1,s2,s3,s4,s5,s6,s7,s8,s9;
        for (int i = 0; i<=8; i++){
            for (int j = 0; j<=8; j++){
                if (board[i][j]!= '.'){
                    if (!checkRowCol(board,i,j)) return false;
                    if (i<=2 && j<=2){
                        if (s1.find(board[i][j])!=s1.end()) return false;
                        s1.insert(board[i][j]);
                    } 
                    else if (i<=2 && j<=5){
                        if (s2.find(board[i][j])!=s2.end()) return false;
                        s2.insert(board[i][j]);
                    } 
                    else if (i<=2 && j<=8){
                        if (s3.find(board[i][j])!=s3.end()) return false;
                        s3.insert(board[i][j]);
                    } 
                    else if (i<=5 && j<=2){
                        if (s4.find(board[i][j])!=s4.end()) return false;
                        s4.insert(board[i][j]);
                    } 
                    else if (i<=5 && j<=5){
                        if (s5.find(board[i][j])!=s5.end()) return false;
                        s5.insert(board[i][j]);
                    } 
                    else if (i<=5 && j<=8){
                        if (s6.find(board[i][j])!=s6.end()) return false;
                        s6.insert(board[i][j]);
                    } 
                    else if (i<=8 && j<=2){
                        if (s7.find(board[i][j])!=s7.end()) return false;
                        s7.insert(board[i][j]);
                    } 
                    else if (i<=8 && j<=5){
                        if (s8.find(board[i][j])!=s8.end()) return false;
                        s8.insert(board[i][j]);
                    } 
                    else if (i<=8 && j<=8){
                        if (s9.find(board[i][j])!=s9.end()) return false;
                        s9.insert(board[i][j]);
                    } 
                }
            }
        }
        return true;

    }
};