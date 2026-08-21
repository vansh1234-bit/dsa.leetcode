class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1){
            return true ;
        }
        if(n <= 0 || n % 2 != 0) {
            return false ;
        }
        else if(n == 2){
            return true ;
        }
        else {
            int m = n / 2 ;
            if(m == 1 ){
                return false ;
            }
             return isPowerOfTwo(m) ;
        }
return true ;
    }
};