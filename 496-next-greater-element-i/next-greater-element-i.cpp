class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     stack<int> st ;
     vector<int> ans(nums2.size()  , -1 ) ; 
     for(int i = nums2.size() - 1 ; i >= 0  ; i--){
            while(!st.empty()){
                if(st.top() > nums2[i]){
                    ans[i] = st.top() ;
                    st.push(nums2[i]) ; 
                    break ; 
                }
                else {
                    st.pop() ; 
                }
            }
            if(st.empty()){
                st.push(nums2[i]) ; 
                // ans[i] = -1 ; 
            }
     }   
     for(int i = 0  ; i < nums1.size() ; i++){
        int target = nums1[i] ;
for(int j = 0  ; j < nums2.size() ; j++){
    if(target == nums2[j]){
        nums1[i] = ans[j] ;
         break ; 
    }
}
     }
     return nums1 ; 
    }
};