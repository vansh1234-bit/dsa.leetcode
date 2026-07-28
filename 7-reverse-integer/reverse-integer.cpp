class Solution {
public:
    int reverse(int x) {

        int z = 0 ;
        while(x != 0 ){
           int m = x % 10 ;
            x = x / 10 ;
            if(z > INT_MAX / 10 || ( z == INT_MAX / 10 && m > 7  )) {
                return 0 ;
            }

            if(z < INT_MIN / 10 || ( z == INT_MIN / 10 && m < -8 )){
                return  0 ;
            } 
           z = m + (z * 10) ; 
       }
    return z ;
    }
};