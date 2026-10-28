class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st ; 
        int cb = 0 ;
        int ob= 0 ;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == ')'){
                cb ++ ; 
                if(ob >= cb){
                    st.push(s[i]) ; 
                }
                else {
                    cb-- ; 
                    continue ; 
                }
            }
            else if(s[i] == '('){
                ob ++ ; 
                st.push(s[i]) ; 
            }
            else {
            st.push(s[i]) ;
        }
        }
string str ; 
int n = ob - cb ; 
while(!st.empty()){
    if(n != 0 ){
        if(st.top() == '('){
st.pop() ; 
n -- ; 
        }
        else {
        str.push_back(st.top()) ; 
        st.pop() ; 
    }
}
else {
str.push_back(st.top()) ; 
st.pop() ; 
}
    }
    reverse(str.begin() , str.end()) ; 
    return str ; 
    }
};