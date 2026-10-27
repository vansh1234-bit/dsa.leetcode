class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax = 0 ; 
        int rightmax = 0 ; 
        int left  = 0 ; 
        int right = height.size() - 1  ;
        int score = 0  ;
        while(left < right){
            if(height[left] < height[right]){
                if(height[left] < leftmax ){
                    score += leftmax - height[left]  ;
                }
                else {
                    leftmax = height[left] ; 
                }
                left = left + 1 ;
            }
            else {
                if(height[right] < rightmax){
                    score += rightmax - height[right] ; 
                }
                else {
                    rightmax = height[right] ; 
                }
                right = right - 1 ;       
            }
        }
        return score ; 
    }
};