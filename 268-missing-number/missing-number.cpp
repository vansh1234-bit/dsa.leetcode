class Solution {
public:
    int missingNumber(vector<int>& nums){
int n = nums.size() ;
        int sum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++ ){
            sum += nums[i] ;
        }
        int actual_Sum = n*(n+1) / 2 ;
        int required = - sum + actual_Sum ;
    return required ;
    }
};