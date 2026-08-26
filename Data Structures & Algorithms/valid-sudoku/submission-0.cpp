class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char>row;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(row.find(board[i][j])!=row.end())return false;
                    row.insert(board[i][j]);
                }
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<char>col;
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    if(col.find(board[j][i])!=col.end())return false;
                    col.insert(board[j][i]);
                }
            }
        }

        for(int i=0;i<9;i++){
            unordered_set<char>s;
            for(int a=0;a<3;a++){
                for(int b=0;b<3;b++){
                    int row=(i/3)*3+a;
                    int col=(i%3)*3+b;
                    if(board[row][col]!='.'){
                        if(s.find(board[row][col])!=s.end())return false;
                        s.insert(board[row][col]);
                    }
                }
            }
        }
        return true;
    }
};
