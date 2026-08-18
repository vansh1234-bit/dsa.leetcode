class Solution {
public:
void print(vector<int> nums , int idx ,vector<int> &ds , vector<vector<int>> & ans){
// if(idx == nums.size()){
    ans.push_back(ds) ;
    // return ;
// }
for(int i = idx ; i < nums.size() ; i++){
    if(i > idx && nums[i] == nums[i-1]){
        continue ;
    }
    ds.push_back(nums[i]) ;
    print(nums , i+ 1 , ds , ans ) ;
    ds.pop_back() ;

}

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds ;
        vector<vector<int>> ans ;
        sort(nums.begin() , nums.end()) ;
        print(nums , 0 , ds , ans ) ;
        return ans ;
    }
};