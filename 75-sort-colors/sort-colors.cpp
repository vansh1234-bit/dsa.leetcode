class Solution {
public:
    void sortColors(vector<int>& nums) {
     int count1 = 0 ;
     int count2 = 0 ;
     int count0 = 0 ;

     for(int i = 0 ; i < nums.size() ; i++){
  if(nums[i] == 1 ){
    count1 ++ ;
  }
   else if (nums[i] == 0 ){
    count0 ++ ;
  }
else {
    count2 ++ ;
}
     }  


     int idx = 0 ;
     for(int i = 0 ; i < count0 ; i++){
        nums[idx++] = 0 ;
     } 
     for(int j = 0 ; j < count1 ; j++){
        nums[idx++] = 1 ;
     }
     for(int k = 0 ; k < count2 ; k++){
        nums[idx++] = 2 ;
     }
    }
};