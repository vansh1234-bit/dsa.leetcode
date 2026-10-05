class Solution {
public:
    int trap(vector<int>& height) {
        int rightMax = 0;
        int leftMax = 0;
        int left = 0;
        int right = height.size() - 1;
        int waterStore = 0;
        while (left < right) {
            if (height[left] <= height[right] ){
                if (height[left] < leftMax) {
                    waterStore += (leftMax - height[left] ) ;
                } else {
                    leftMax =  height[left] ;
                }
                left++;
            } else {
                if (height[right] < rightMax) {
                    waterStore +=   (rightMax - height[right]);
                } else {
                    rightMax = height[right] ;
                }
                right-- ;
            }
        }
        return waterStore;
    }
};