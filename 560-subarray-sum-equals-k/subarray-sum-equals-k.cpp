class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        
        int sum = 0;
        int count = 0;
        
        // Prefix sum 0 occurs once initially
        mp[0] = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            
            // Current prefix sum
            sum += nums[i];
            
            // Check if (sum - k) prefix sum existed before
            if (mp.find(sum - k) != mp.end()) {
                count += mp[sum - k];
            }
            
            // Store current prefix sum
            mp[sum]++;
        }
        
        return count;
    }
};