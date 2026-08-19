class Solution {
public:
void print(vector<int>& nums , int target , int idx , vector<int> &ds , vector<vector<int>> &ans ){
if(target == 0 ){
    ans.push_back(ds) ;
    return ;
}
for(int i = idx ; i < nums.size() ; i++){
    if(i > idx && nums[i] == nums[i-1]){
        continue ;
    }
    if(nums[i] > target){
        break ;
    }
    ds.push_back(nums[i]) ;
    print(nums , target - nums[i] , i + 1 , ds , ans) ;
    ds.pop_back() ;
}

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // int idx = 0 ;
        vector<int> ds ;
        vector<vector<int>> ans ;
sort(candidates.begin() , candidates.end()) ;
print(candidates , target , 0 , ds , ans ) ;
return ans ;

    }
};