class Solution {
public:
void perm(vector<int> nums , vector<int> &ds , vector<vector<int>> &ans , vector<int> &hash ){
    if(ds.size() == nums.size()){
        ans.push_back(ds) ;
        return ;
    }
    for(int i = 0 ; i < nums.size() ; i++){
        if(!hash[i]){
            ds.push_back(nums[i]) ;
            hash[i] = 1 ;
            perm(nums , ds, ans , hash ) ;
            hash[i] = 0 ;
            ds.pop_back() ;
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds ;
        vector<vector<int>> ans ;
        vector<int> hash(nums.size() , 0 ) ;
        perm(nums , ds , ans , hash ) ;
        return ans ;
    }
};