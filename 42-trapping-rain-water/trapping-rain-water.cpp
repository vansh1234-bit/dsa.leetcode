class Solution {
public:
    int trap(vector<int>& height) {
      
// for(int i = 0 ; i < height.size()  ; i++){
//     if(height[i] < min(leftMax , rightMax)){
//            water_contain += min(leftMax , rightMax) - height[i] ;
//      }
//     if(leftMax <= rightMax){
//         leftMax = max(leftMax , height[i]) ;
//     }
//     else {
//         rightMax = max(rightMax , height[i]) ; 
//     }
// }
int leftMax = 0 ;
int rightMax = 0 ;
int score = 0 ;
int l =  0 ;
int r = height.size()-1 ; 
while(l < r ){
    if(height[l] <= height[r]){
        if(height[l] < leftMax ){
            score += leftMax - height[l] ;
        }
        else {
            leftMax = height[l] ;
        }
        l = l + 1 ;
    }
    else {
         if(height[r] < rightMax ){
            score += rightMax - height[r] ; 
         }
         else {
        rightMax = height[r] ;
         }
         r = r-1 ;
}
}
return score  ; 
    }
};