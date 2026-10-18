class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
          int n = heights.size() ; 
        vector<int> left_small(n , 0 ) ; 
        stack<int> st ;  
      
vector<int> right ( n , 0 ) ; 
for(int i = n - 1  ; i >= 0 ; i--){
    while(st.size() > 0 && heights[st.top()] >= heights[i]){
        st.pop() ; 
    }
    right[i] = st.empty() ? n  : st.top() ; 
    st.push(i) ; 
}


while(!st.empty()){
st.pop() ;
} 
// left smaller 
        for(int i = 0  ; i < n ; i ++){
   while(st.size() > 0 && heights[st.top()] >= heights[i]){
    st.pop() ; 
   }
   left_small[i] = st.empty() ? -1 : st.top() ; 
st.push(i) ; 
        }


int ans = 0 ;
for(int i = 0 ; i < heights.size() ; i++){
    int width = right[i] - left_small[i] - 1 ;
    int currarea = heights[i] * width ; 
    ans = max (ans , currarea) ; 
}
return ans ; 
    }
};