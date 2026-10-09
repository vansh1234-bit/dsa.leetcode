class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size() ;
        int right = n - 1 ;
        int left = 0 ;
         int leftMax =  0 ;
         int rightMax = 0 ;
         int count = 0 ;
         while(left < right){
if(height[right] >= height[left]){
     if(height[left] < leftMax){
        count += leftMax - height[left] ;
     }
     else {
        leftMax = height[left] ;
     }
     left ++ ;
}
else {
    if(height[right] < rightMax ){
        count += rightMax - height[right] ;
    }
    else {
        rightMax = height[right] ;
    }
    right -- ;
}
         }
         return count ;
    }
};