class Solution {
public:
void print(int n , int k , vector<int> &ds , vector<vector<int>> &ans , int idx ){
if(ds.size() == k ){
    ans.push_back(ds) ;
    return ;

}
for(int i = idx  ; i <= n ;i++){
        ds.push_back(i) ;
        print(n , k ,ds , ans , i + 1) ;
        ds.pop_back() ;
    }
}
    vector<vector<int>> combine(int n, int k) {
        int idx = 1 ;
        vector<int> ds ;
        vector<vector<int>> ans ;
        print(n , k , ds , ans , idx) ;
        return ans ;
        }
};