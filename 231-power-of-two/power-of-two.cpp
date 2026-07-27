class Solution {
public:
    bool isPowerOfTwo(int n ) {
        // thinkh about odd and even 
        if(n == 1 ){
            return true ;
        }
        if(n <= 0 || n % 2 != 0 ){
            return false ;
        }
    return isPowerOfTwo(n / 2 ) ;
    }
};