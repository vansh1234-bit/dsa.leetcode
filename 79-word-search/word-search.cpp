class Solution {
public:
bool search(vector<vector<char>>& board, string &word , int i , int j , int st , vector<vector<int>> &visited){
if(st == word.size()){
    return true ;
}
if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size()){
    return false ;
}
if(visited[i][j] || board[i][j] != word[st]){
    return false ;
}
visited[i][j] = 1 ;

bool found = search(board , word , i + 1 , j , st + 1 , visited ) || search(board , word , i - 1 , j , st + 1 , visited ) || search(board , word , i  , j + 1 , st + 1 , visited ) || search(board , word , i , j - 1, st + 1 , visited ) ;
visited[i][j] = 0 ;
return found ;
}
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size() ;
        int n = board[0].size() ;
        vector<vector<int>> visited(m , vector<int> (n , 0 )) ;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(search(board , word , i , j , 0 , visited)) {
                    return true ;
                }
            }
            // return false ;
        }
        return false ;
    }
};