class Solution {
public:
void  comb(vector<int>& arr , int target , vector<int> &ds , int idx  , vector<vector<int>> &ans ){
    // vector<vector<int>> ans ;
    if(target == 0 ){
       ans.push_back(ds) ;
       return ;
    }
    for(int i = idx ; i < arr.size() ; i++){
        if(i > idx && arr[i-1] == arr[i]){
            continue ;
        }
        if(target < arr[i]){
            break ;
        }
        ds.push_back(arr[i]) ;
        comb(arr , target - arr[i] , ds ,i + 1  , ans  ) ;
        ds.pop_back() ;
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ds ;
        vector<vector<int>> ans ; 
        sort(candidates.begin() , candidates.end()) ;
        int idx = 0 ;
         comb(candidates , target , ds , idx  , ans ) ;
         return ans ;
    }
};