class Solution {
public:
    int calPoints(vector<string>& operations) {
        //    vector<int> ans ; 
           stack<int> st ;
           for(int i = 0 ; i < operations.size() ; i++ ){
            if(operations[i] != "+" && operations[i] != "C" &&  operations[i] != "D"){
                int num = stoi(operations[i]) ;
    //   ans.push_back(num) ;
      st.push(num) ;
            }
            else if(operations[i] == "+"){
              int first = st.top() ;
              st.pop() ;
              int second = st.top() ;
              st.pop() ;
              int third = first + second ;
               st.push(second) ;
              st.push(first) ;
              st.push(third) ;
            }
            else if(operations[i] == "D"){
                st.push(st.top() * 2 ) ;
            }
            else if(operations[i] == "C"){
                st.pop() ;
            }
           }
           int count = 0 ;
          while(!st.empty()){
            count += st.top() ;
            st.pop() ;
          }
     return count ;       
    }
};