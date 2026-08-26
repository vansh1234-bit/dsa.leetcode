class Solution {
public:
bool issafe(vector<vector<char>> &board , int row , int col , char num  ){
    for(int i = 0 ; i < 9 ; i++){
        if(board[i][col]  == num){
            return false ;
        }
    }
        for(int j = 0 ; j < 9 ; j++){
        if(board[row][j] == num ){
            return false ;
        }
        }
        int srow = (row/3) * 3 ;
        int scol = (col/3) * 3 ;
        for(int i = srow ; i <= srow + 2 ; i++){
            for(int j = scol ; j <= scol + 2 ; j++){
                if(board[i][j] == num ){
                    return false ;
                }
            }
        }
        return true ;
    }  
bool print(vector<vector<char>> &board , int row , int col ){
if(row == 9 ){
    return true ;
}
if(col == 9 ){
    return print(board , row + 1 , 0) ;
}
if(board[row][col] != '.'){
return print(board , row , col + 1  ) ;
}
for(char num = '1' ; num <= '9' ; num ++){
// if(board[row][col] == '.'){
if(issafe(board , row , col , num)){
    board[row][col] = num ;
  if(print(board , row , col + 1)) {
     return true ;
  }
  board[row][col] = '.' ;
}
    // }
}
return false ;
}
    void solveSudoku(vector<vector<char>>& board) {
        int row = 0 ;
        int col = 0 ;
        print(board , row , col ) ;

        
    }
};