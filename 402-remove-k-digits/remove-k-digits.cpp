class Solution {
public:
    string removeKdigits(string num, int k) {
     stack<char> st ;
     for(int i =  0 ; i < num.length() ; i ++){
        while(!st.empty() && k > 0 && (st.top()-'0') > (num[i] - '0')){
         st.pop() ;
         k = k -1 ;
        }
        st.push(num[i]) ; 
     }
     while(k > 0 ){
        st.pop() ;
        k = k -1 ;
     }   
     if(st.empty()){
        return "0" ;
     }
     string res = "" ;
     while(!st.empty()){
    //   res = res + st.top() ;
    res.push_back(st.top()) ; 
      st.pop() ; 
     }
     while(res.length() != 0 && res.back() == '0'){
        res.pop_back() ;
     }
     reverse(res.begin() , res.end()) ;
     if(res.empty()){
        return "0" ; 
     }
     return res ; 
    }
};