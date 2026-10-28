
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        int curr = INT_MIN;

        for(int i = nums.size() - 1; i >= 0; i--) {
            if(nums[i] < curr) {
                return true;
            }

            while(!st.empty() && nums[i] > st.top()) {
                curr = st.top();
                st.pop();
            }

            st.push(nums[i]);
        }

        return false;
    }
};
