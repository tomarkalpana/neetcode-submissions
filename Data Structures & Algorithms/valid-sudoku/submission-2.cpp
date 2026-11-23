class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] == '.'){
                    continue;
                }

                else{
                    //row
                    for(int k=0; k<9; k++){
                        if(j != k && board[i][j] == board[i][k])
                            return false;
                    }

                    //col
                    for(int k=0; k<9; k++){
                        if(i != k && board[i][j] == board[k][j])
                            return false;
                    }

                    //box
                    int startrow = (i/3) * 3;
                    int startcol = (j/3) * 3;

                    for(int r=startrow; r<startrow+3; r++){
                        for(int c=startcol; c<startcol+3; c++){
                            if((i != r || j != c) && board[i][j] == board[r][c])
                                return false;
                        }
                    }
                }
            }
        }

        return true;

    }
};
