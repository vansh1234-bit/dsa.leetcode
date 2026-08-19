class Solution {
public:
void find(vector<int> &nums , vector<int> &ds , vector<vector<int>> &ans , int idx  ){
ans.push_back(ds) ;
for(int i = idx ; i < nums.size() ; i++){
    if(i > idx && nums[i] == nums[i-1]){
        continue ;
    }
    ds.push_back(nums[i]) ;
    find(nums , ds , ans , i+1) ;
    ds.pop_back() ;
}



}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds = {} ;
        vector<vector<int>> ans ;
        sort(nums.begin() , nums.end()) ;
        find(nums , ds , ans , 0  ) ;
        return ans ;
    }
};