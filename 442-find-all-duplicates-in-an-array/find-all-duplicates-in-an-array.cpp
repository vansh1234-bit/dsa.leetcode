class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int , int > map ;
        vector<int> ans ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(map[nums[i]] == 1 ){
              ans.push_back(nums[i]) ;
            }
            else {
                map[nums[i]] ++ ;
            }
        }
        return ans ;
    }
};