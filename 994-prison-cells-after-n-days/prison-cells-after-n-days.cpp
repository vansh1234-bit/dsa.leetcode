class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n ) {
        // vector<int> ans(8) ;
        // int m = n / 15 ;
        // int z =  n % 14 ; 
        int z = (n-1)% 14 + 1 ;
        for (int i = 1 ; i <= z ; i++){
            vector<int> ans(8 , 0 ) ;
            for(int j = 1; j < 7 ; j++){
                if(cells[j-1] == cells[j+1]){
                    ans[j] = 1 ;
                }
                else {
                    ans[j] = 0 ;
                }
            }
            cells = ans ;
            // ans = {} ;
        }
        return cells ;
    }
};