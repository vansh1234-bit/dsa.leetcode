class Solution {
public:
bool issafe(string s , int st , int end ){
    while(st <= end ){
        if(s[st] != s[end]){
            return false ;
        }
        st ++ ;
        end -- ;
            }
    return true ;
    }

void print(string s , vector<string> &ds  , vector<vector<string>> &ans , int idx)
{
   if(idx == s.size()){
    ans.push_back(ds) ;
    return ;
   }
for(int i = idx ; i < s.size() ; i++ ){
    if(issafe(s , idx , i)) {
        ds.push_back(s.substr(idx , i - idx + 1)) ;
        
         print(s , ds , ans , i + 1 ) ;
         ds.pop_back() ;
    }
}

} 
   vector<vector<string>> partition(string s) {
        vector<string> ds ;
        vector<vector<string>> ans ;
        print(s , ds , ans , 0 ) ;
     return ans ;
    }
};