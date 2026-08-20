class Solution {
public:
void  print(vector<int>& nums , int idx , vector<int> &ds , vector<vector<int>> &ans ) {
        if(idx == nums.size()){
            ans.push_back(nums) ;
            return ;
        }
        for(int i = idx ;i < nums.size() ; i++ ){
            swap(nums[i] ,nums[idx]) ;
            print(nums , idx + 1 , ds , ans ) ;
            swap(nums[i] , nums[idx]) ;
        }
// return ans ;
    }
    vector<vector<int>> permute(vector<int>& nums) {
         int idx = 0 ;
        vector<int> ds ;
        vector<vector<int>> ans ;
        print(nums , idx , ds , ans ) ;
        return ans ;
    }
    
};



