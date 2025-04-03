class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {0};
        int col[9][9] = {0};
        int box[9][9] = {0};
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++){
                if (board[i][j] != '.'){
                    int digit = board[i][j] - '0' - 1;
                    int boxIndex = (i/3)*3 + (j/3);
                    
                    if (row[i][digit]++ || col[j][digit]++ || box[boxIndex][digit]++){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
