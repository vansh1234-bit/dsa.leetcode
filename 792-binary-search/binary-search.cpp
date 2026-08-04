class Solution {
public:
int searchh(vector<int> &nums , int target , int st , int end ){

  int mid = st + (end - st) / 2 ;
        if(st > end ){
            return -1 ;
        }
        if(nums[mid] == target ){
            return mid ;
        }
        else if(nums[mid] > target ){
           return searchh(nums , target , st , mid -1 ) ;
        }
        else {
            return searchh(nums , target , mid + 1 , end ) ;
        }

        return -1 ;
        }
    int search(vector<int>& nums, int target ) {
        int st = 0 ;
        int end = nums.size() - 1 ;
        return searchh(nums , target , st , end ) ;
    }
};