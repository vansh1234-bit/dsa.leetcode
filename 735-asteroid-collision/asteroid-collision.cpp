class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st ;
         
        for(int i = 0 ; i < asteroids.size() ; i++){
            bool isalive = true ;
      if(!st.empty() && ((st.top() * asteroids[i]) > 0 || st.top() < 0 && asteroids[i] > 0 )){
                 st.push(asteroids[i]) ;
                 continue ; 
      }
while(!st.empty() && (st.top() > 0 && asteroids[i] < 0) ){
    if(-asteroids[i]  > st.top() ){
        st.pop() ;
    }
    else if(-asteroids[i]  == st.top() ){
        st.pop() ;
        isalive = false ;
        break ; 
    }
    else {
         isalive = false ;
        break ;  
    }
}
if(isalive){
    st.push(asteroids[i]) ;
}
        }
vector<int> ans ;
int j = 0 ;
while(!st.empty()){
ans.push_back(st.top()) ;
j ++ ;
st.pop() ;
}
reverse(ans.begin() , ans.end()) ;
return ans ; 

    }
};