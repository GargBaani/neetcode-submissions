class Solution {
public:
    bool isValid(vector<vector<char>>&board,int row, int col,int ch){
        for(int i=0;i<9;i++){
            if(i!=row && board[i][col]==ch)return false;
        }
        for(int i=0;i<9;i++){
            if(i!=col && board[row][i]==ch)return false;
        }
        int stR=3*(row/3);
        int stC=3*(col/3);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(stR+i != row && stC+j !=col && board[stR+i][stC+j]==ch)return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(!isValid(board,i,j,board[i][j]))return false;
                }
            }
        }
        return true;
    }
};
