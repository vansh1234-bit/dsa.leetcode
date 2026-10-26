class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st ; 
        int n = heights.size() ; 
        vector<int> ns( n , n ); 
        for(int i = heights.size() - 1 ; i >= 0 ; i-- ){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop() ; 
            }
            if(true){
                if(st.empty()){
                ns[i] = n ;
                }
                else {
                ns[i] = st.top() ; 
                }
                st.push(i) ; 
            }
        }
while(!st.empty()){
    st.pop() ; 
}


vector<int> ps(n,-1) ; 
for(int i = 0 ; i < heights.size() ; i++){
while(!st.empty() && heights[st.top()] >= heights[i]){
    st.pop() ; 
}
 if(true){
        if(st.empty()){
           ps[i] = -1;       
            }
         else {
           ps[i] = st.top() ; 
                }
                 st.push(i) ;
            }
}
int maxx =  0 ;
for(int i = 0 ; i < heights.size() ; i++)
{
    int width = ns[i] - ps[i] - 1  ; 
    int curr_max =  0 ;
    curr_max = heights[i] * width ; 
    maxx = max(maxx , curr_max) ; 
}
return maxx ; 
    }
};