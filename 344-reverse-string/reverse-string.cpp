class Solution {
public:
void healper(vector<char> &s , int st , int end ){
     if(st >= end ){
            return ;
        }
        swap(s[st] , s[end]) ;
     healper(s ,  st + 1  , end - 1  ) ;

}
    void reverseString(vector<char>& s  ) {
        int st = 0 ;
        int end = s.size() -1 ;
    return healper(s , st , end ) ;
    }
};