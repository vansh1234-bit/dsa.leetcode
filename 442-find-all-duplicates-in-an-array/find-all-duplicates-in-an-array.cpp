class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int , int > map ; 
        int idx = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(map[nums[i]] == 1 ){
            
            nums[idx ++] = nums[i] ;
            }
            else {
                map[nums[i]] ++ ;
            }
        }
        nums.resize(idx) ;
        return nums ;
    }
};