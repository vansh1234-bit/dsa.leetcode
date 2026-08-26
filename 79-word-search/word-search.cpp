class Solution {
public:
bool check(vector<vector<char>>& board, string word , int i , int j , int st , vector<vector<int >> &hash  ){
    if(st == word.size()){
        return true ;
    }
    if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size()){
        return false ;
    }
    if(hash[i][j] == 1 || board[i][j] != word[st]) {
        return false ;
    }
hash[i][j] = 1 ;
    if(check(board , word , i+1 , j , st + 1 , hash  ) || check(board , word , i-1 , j , st + 1  , hash ) || check(board , word , i , j-1 , st + 1 ,hash ) || check(board , word , i , j + 1 , st + 1 , hash ) ){
        return true ;
    }
    hash[i][j] = 0 ;
    return false ;
}

    bool exist(vector<vector<char>>& board, string word) {
        int st = 0 ;
        int i = 0 ;
        int j = 0 ;
        int m  = board.size() ;
        int n = board[0].size() ;
        vector<vector<int>> hash(m , vector<int>(n , 0 ) );
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j < board[i].size() ; j++){
               if (check(board ,word , i , j  , st, hash  ) ){
                return true ;
               } 
            }
        }
        return false ;
    }
};