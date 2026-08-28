class Solution {
public:
void merge(vector<int> &nums , int st , int mid , int end ){
int left = st  ;
int rigth = mid + 1 ;
vector<int> temp ;
while(left <= mid  && rigth <= end ){
    if(nums[left] <= nums[rigth]){
      temp.push_back(nums[left]) ;
      left ++ ;
    }
    else {
        temp.push_back(nums[rigth]) ;
        rigth ++ ;
    }
}
    while(left <= mid ){
        temp.push_back(nums[left]) ;
        left ++ ;
    }
    while(rigth <= end ){
        temp.push_back(nums[rigth]) ;
        rigth ++ ;
    }
for(int i = st ; i <= end ; i++ ){
    nums[i] = temp[i- st ] ;
}
}
void merge_sort(vector<int> &nums , int st , int end ){
    if(st >= end ){
        return ;
    }
    int mid = st + (end - st ) / 2 ;
merge_sort(nums ,st , mid ) ;
merge_sort(nums , mid + 1 , end ) ;
merge(nums , st , mid , end ) ;

}
    vector<int> sortArray(vector<int>& nums) {
        int st = 0 ;
        int end =  nums.size() - 1 ;
        merge_sort(nums , st , end ) ;
        return nums ;
    }
};