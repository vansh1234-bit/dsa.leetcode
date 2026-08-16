class Solution {
public:

void all(string digits , vector<string>&ans , string &ds  , vector<string> &mp , int idx){
    if(idx == digits.size()){
        ans.push_back(ds) ;
        return ;
    }
string letter = mp[digits[idx] - '0'] ;
for(char ch : letter ){
ds.push_back(ch) ;
all(digits , ans , ds , mp , idx + 1 ) ;
ds.pop_back() ;
}

}
    vector<string> letterCombinations(string digits) {
        vector<string> ans ;
         vector<string> mp = {
            "", "", "abc", "def",
            "ghi", "jkl", "mno",
            "pqrs", "tuv", "wxyz"
        };
        // vector<string> ds ;
        string ds ; 
all(digits , ans , ds , mp , 0) ;
return ans ;
    }
};