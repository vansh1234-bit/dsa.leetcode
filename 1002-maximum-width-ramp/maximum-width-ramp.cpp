class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int> st ; 
        for(int i = 0 ; i < nums.size() ; i ++){
            if(st.empty() || nums[st.top()] > nums[i] ){
                st.push(i) ; 
            }
        }
int j = nums.size() - 1 ;
int ans =  0 ;
while(j >= 0  ){
    while(!st.empty() &&   nums[j] >= nums[st.top()] ){
        ans = max(ans , j - st.top()) ; 
        st.pop() ; 
    }
    j -- ; 
}
     return ans ;    
    }
};

// class Solution {
// public:
    // int maxWidthRamp(vector<int>& nums) {
        // stack<int> st ; 
        // for(int i = 0 ; i < nums.size() ; i++){
            // if(st.empty() || nums[st.top()] > nums[i]){
                // st.push(i) ; 
            // }
        // }
        // int ramp =  0 ;
// int j = nums.size() - 1 ;
// while(j >= 0 ){
// while(!st.empty() && nums[j] >= nums[st.top()]){
// ramp = max(ramp , j - st.top()) ; 
// st.pop() ; 
// } 
// j -- ; 
// }
// return ramp ; 
    // }
// };




