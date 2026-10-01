class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> ans;
        for (int i = temperatures.size() -1 ; i >= 0 ;  i--) {
while(!st.empty()){
if(temperatures[st.top()] > temperatures[i]){
ans.push_back(st.top() - i ) ;
st.push(i) ; 
break ; 
}
else {
st.pop() ;
}
}
if(st.empty()){
    ans.push_back(0) ;
    st.push(i) ;
}
        }
        reverse(ans.begin() , ans.end()) ;
        return ans ; 
    }
};