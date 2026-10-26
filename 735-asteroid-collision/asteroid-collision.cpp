class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int > ans ;
        stack<int> st ;

for(int i = 0 ; i < asteroids.size() ; i++){
            bool collide = false ; 
if( asteroids[i] > 0 || ( !st.empty() && asteroids[i] < 0 && st.top() < 0 )) {
    st.push(asteroids[i]) ; 
    continue ;  
}
else if(!st.empty() && st.top() < 0 && asteroids[i] > 0 ){
    st.push(asteroids[i]) ; 
continue  ;
}
    while(!st.empty() && st.top() > 0 && asteroids[i] < 0 ){
        if(-asteroids[i] > st.top()){
            st.pop() ; 
        }
        else if(-asteroids[i] == st.top()){
            st.pop() ;
            collide = true ;   
            break ; 
        }
        else {
            collide = true ; 
            break ; 
        }
    }
    if(!collide){
        st.push(asteroids[i]) ; 
     } 
}
while(!st.empty()){
    ans.push_back(st.top()) ;
    st.pop() ;  
}
reverse(ans.begin() , ans.end()) ;
return ans ; 
    }
};
   