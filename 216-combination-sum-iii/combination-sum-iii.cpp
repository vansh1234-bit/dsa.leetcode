class Solution {
public:
void sum (int start , int k , int target  , vector<int> &ds , vector<vector<int>> &ans){
if(ds.size() == k ){
    if(target == 0 ){
    ans.push_back(ds) ;
    }
    return ;
    
}

for(int i = start ; i <= 9 ; i++){
    if(i > target){
        break ;
    }
ds.push_back(i ) ;
sum(i+ 1  , k , target - i  , ds , ans ) ;
ds.pop_back() ;   
// sum(k , n , ds , ans ,  )  ;
}
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds ;
        vector<vector<int>> ans ;
        // int m = 1 ;
        sum(1 , k , n , ds , ans) ;

return ans ;

    }
};