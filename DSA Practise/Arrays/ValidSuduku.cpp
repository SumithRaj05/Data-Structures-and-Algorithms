// Determine if a 9 x 9 Sudoku board is valid. Only the 
// filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.
// Each column must contain the digits 1-9 without repetition.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the 
// digits 1-9 without repetition.

// Note:

// A Sudoku board (partially filled) could be valid but is not necessarily solvable.
// Only the filled cells need to be validated according to the mentioned rules.

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool flag = 1;
        map<char, bool> temp;
        for(int i=0; i<9; i++){
            temp = {
                {'1', 0}, {'2', 0}, {'3', 0}, {'4', 0}, {'5', 0}, {'6', 0}, {'7', 0}, {'8', 0}, {'9', 0},
            };
            for(int j=0; j<9; j++){
                if(board[i][j] == '.'){
                    continue;
                }else if(temp[board[i][j]] == 1){
                    flag = 0;
                    break;
                }else{
                    temp[board[i][j]] = 1;
                }
            }
            if(!flag){
                break;
            }
        }
        if(!flag){
            return flag;
        }

        for(int i=0; i<9; i++){
            temp = {
                {'1', 0}, {'2', 0}, {'3', 0}, {'4', 0}, {'5', 0}, {'6', 0}, {'7', 0}, {'8', 0}, {'9', 0},
            };
            for(int j=0; j<9; j++){
                if(board[j][i] == '.'){
                    continue;
                }else if(temp[board[j][i]] == 1){
                    flag = 0;
                    break;
                }else{
                    temp[board[j][i]] = 1;
                }
            }
            if(!flag){
                break;
            }
        }
        if(!flag){
            return flag;
        }

        for(int i=0; i<9; i+=3){
            for(int j=0; j<9; j+=3){
                temp = {
                    {'1', 0}, {'2', 0}, {'3', 0}, {'4', 0}, {'5', 0}, {'6', 0}, {'7', 0}, {'8', 0}, {'9', 0},
                };
                for(int k=i; k<i+3; k++){
                    for(int m=j; m<j+3; m++){
                        if(board[k][m] == '.'){
                            continue;
                        }else if(temp[board[k][m]] == 1){
                            flag = 0;
                            break;
                        }else{
                            temp[board[k][m]] = 1;
                        }
                    }
                    if(!flag){
                        break;
                    }
                }
                if(!flag){
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        return flag;
    }
};