class Solution {
public:
void sort(vector<int> &nums , int st , int end ){
     int mid = st ;
    while(mid <= end ){
        if(nums[mid] == 0 ){
            swap(nums[st] , nums[mid]) ;
            st ++ ;
            mid ++ ;
        }
         else if  (nums[mid] == 1 ){
            mid ++ ;
        }
        else {
            swap(nums[end] , nums[mid]) ;
            end -- ;
        }
    } 



}
    void sortColors(vector<int>& nums) {
        int st = 0 ;
        int end = nums.size() - 1 ;
        sort(nums , st , end ) ;
        
    }
};