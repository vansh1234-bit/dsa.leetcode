class Solution {
public:
void print(vector<int> nums , int index , vector<int> & ans , vector<vector<int>> &anss){
if(index == nums.size()) {
// for(int i = 0 ; i < ans.size() ; i++){
    // cout<<ans[i]<<" " ;
    
// }

// cout<<endl ;
anss.push_back(ans) ;
  return ;
}
ans.push_back(nums[index]) ;
    print(nums , index + 1  , ans , anss) ;
ans.pop_back() ;
    print(nums , index + 1  , ans , anss) ;

}
    vector<vector<int>> subsets(vector<int>& nums) {
        int index = 0 ;
        vector<int> ans ;
        vector<vector<int>> anss ;
        print(nums , index , ans , anss ) ;
return anss ;

    }
};