class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       
       
        for(int i=0; i<board.size();i++ ){
             map<char,int> row;
            for(int j=0;j<board[i].size();j++){
                if (board[i][j]!='.' && row.find(board[i][j])!=row.end()){
                    cout<<"row: "<<i<<" "<<j<<endl;
                    return false;
                }
                row[board[i][j]]++;
            }
        }
 
        for(int i=0; i<9;i++ ){
             map<char,int>column;
            for(int j=0;j<9;j++){
                if (board[j][i]!='.' && column.find(board[j][i])!=column.end()){
                    cout<<"column: "<<i<<" "<<j<<endl;
                    return false;
                }
                column[board[j][i]]++;
            }
        }
        
        for(int rowStart=0;rowStart<9;rowStart+=3){
            for (int colStart=0;colStart<9;colStart+=3){
                map<char,int>square;
                for( int i=rowStart+0; i<rowStart+3;i++){
                    for(int j=colStart+0;j<colStart+3;j++){
                        if (board[i][j]!='.' && square.find(board[i][j])!=square.end()){
                            return false;
                        }
                        square[board[i][j]]++;
                    }
                }
            }
        }

        return true;
    }
};
